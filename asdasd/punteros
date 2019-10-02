#include <iostream>

using namespace std;
/*
void swap(int *arr, int a, int b) {
	int c = *arr;
	*(arr+a) = *(arr+(b-a));
	*(arr+(b-a)) = c;

}




void imprimir(int arr[], int tam) {
    cout << "[ ";
	while(tam--){
       cout << "}"  cout << *arr++ << " ";
	}
	cout << "]" << endl;
}



int suma(int *arr, int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++)
		suma += *arr++;
    return suma;
}


*/
int suma_re(int *arr, int tam) {
	if (tam == 1)
		return *(arr+0);
	return *(arr+(tam - 1)) + suma_re(arr, tam - 1);
}


/*
int suma_re(int arr[], int tam) {
	if (tam == 1)
		return arr[0];
	return arr[tam - 1] + suma_re(arr, tam - 1);
}
void inversa_re(int *arr, int tam, int i=0) {
	if (tam-1 > i) {
		swap(arr, i, tam);
		inversa_re(arr, tam-1, i+1);
	}
}






void inversa(int arr[], int tam) {
	int a;
	int b = tam / 2;
	for (int i = 0; i < b; i++) {
		swap(arr, i, tam);
		tam = tam - 1;
	}
}


*/
int main() {
	int x[4];
	for (int i = 0; i <4; i++)
		cin >> x[i];

	cout<<suma_re(x,4);

	return 0;
}
