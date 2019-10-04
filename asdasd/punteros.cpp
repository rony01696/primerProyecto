#include <iostream>

using namespace std;

void swap(int *arr, int a, int b) {
	int c = *(arr+a);
	*(arr+a) = *(arr+b);
	*(arr+b) = c;
}

void imprimir(int arr[], int tam) {
    cout << "[ ";
	while(tam--){
       cout << *arr++ << " ";
	}
	cout << "]" << endl;
}
int suma(int *arr, int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++)
		suma += *arr++;
    return suma;
}


int suma_re(int *arr, int tam) {
	if (tam == 1)
		return *arr++;
	return *(arr+(tam - 1)) + suma_re(arr, tam - 1);
}


void inversa_re(int *arr, int tam, int i=0) {
	tam--;
	if (tam > i) {
		swap(arr, i, tam);
		inversa_re(arr, tam, i+1);
	}
}


void inversa(int *arr, int tam) {

	int b = tam / 2;
    	tam=tam-1;
	for (int i = 0; i < b; i++) {
		swap(arr, i, tam);
		tam--;
	}
}

void quick(int *arr,int primero, int ultimo){
   	int i=primero;
   	int j=ultimo;
    	int pivote=(*(arr+i)+*(arr+j))/2;
    	while (i<j){
        	while(*(arr+i)<pivote){
            		i++;
        	}
        	while(*(arr+j)>pivote){
            		j--;
        	}
        	if (i<=j){
            		swap(arr,i,j);
            		i++;
            		j--;
        	}
   	 }
    	if (j>primero)
       	 quick(arr,primero,j);
    	
    	if (i<ultimo)
      	  quick(arr,i,ultimo);
    
}




void burbuja(int *arr,int tam){
    	bool cambio=true;
    	while (cambio){
        	cambio=false;
        	for(int i=0;i<tam-1;i++){
           		 if (*(arr+i)>*(arr+i+1)){
                	swap(arr,i,i+1);
                	cambio=true;
            	}
        }
        tam--;
    }
}





void inserccion(int *arr, int tam){
	for (int i = 0; i < tam; i++) {
		int guardar = *(arr+i);
		int j = i;
		while (j > 0 && *(arr+(j-1)) > guardar) {
			*(arr+j) = *(arr+(j-1));
			j -= 1;
		}
		*(arr+j) = guardar;
	}
}










int main() {
	int x[4];
	for (int i = 0; i <4; i++)
		cin >> x[i];

	cout<<suma_re(x,4);

	return 0;
}
