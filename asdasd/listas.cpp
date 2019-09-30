#include <iostream>
using namespace std;

//1

void imprimir(int arr[], int tam) {
	cout << "{";
	for (int i = 0; i < tam; i++)
		if (i != tam - 1)
			cout << arr[i] << ",";
		else
			cout << arr[i];
	cout << "}" << endl;
}


//2

int suma(int arr[], int tam) {
	int suma = 0;
	for (int i = 0; i < tam; i++)
		suma += arr[i];
	return suma;
}

int suma_re(int arr[], int tam) {
	if (tam == 1)
		return arr[0];
	return arr[tam - 1] + suma_re(arr, tam - 1);
}

//3
void swap(int arr[], int i, int tam) {
	int a = arr[i];
	arr[i] = arr[tam-1];
	arr[tam-1] = a;
}

void inversa(int arr[], int tam) {
	int a;
	int b = tam / 2;
	for (int i = 0; i < b; i++) {
		swap(arr, i, tam);
		tam = tam - 1;
	}
}

void inversa_re(int arr[], int tam, int i=0) {
	if (tam-1 > i) {
		swap(arr, i, tam);
		inversa_re(arr, tam-1, i+1);
	}
}

void burbuja(int arr[], int tam) {
	bool cambio = true;
	while (cambio) {
		cambio = false;
		for (int i = 0; i < tam - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr, i, i + 1);
				cambio = true;
			}
		}
		tam--;
	}
}


void Quick(int arr[], int primero, int ultimo)
{
	int i = primero;
	int j = ultimo;
	int pivote = (arr[i] + arr[j]) / 2;
	while (i < j) {
		while (arr[i] < pivote) {
			i++;
		}
		while (arr[j] > pivote) {
			j--;
		}
		if (i <= j) {
			swap(arr, i, j);
			i++;
			j--;
		}
	}
	if (j > primero) {
		Quick(arr, primero, j);
	}
	if (i < ultimo) {
		Quick(arr, i, ultimo);
	}


}
void inserccion(int arr[], int tam)
{
	for (int i = 0; i < tam; i++) {
		int guar = arr[i];
		int j = i;
		while (j > 0 and arr[j - 1] > guar) {
			arr[j] = arr[j - 1];
			j -= 1;
		}
		arr[j] = guar;
	}
}






int main() {
	int x[5];
	for (int i = 0; i <5; i++)
		cin >> x[i];
	Quick(x,0,5-1);
	imprimir(x, 5);
	
	return 0;
}





