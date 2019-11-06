#include <iostream>
using namespace std;
#include "puntero.h"
#include "insertar.h"

int main(){

	menu a;
	int opciones;
	int x1, x2;
	cout << "\t\t\t\t---------------------------------------------\t\t\t\t" << endl;
	cout << "\t\t\t\t|            Tienda de Mascotas             |\t\t\t\t" << endl;
	cout << "\t\t\t\t---------------------------------------------\t\t\t\t" << endl;
	cout << "\t\t\t\t|          1) Agregar cliente               |\t\t\t\t" << endl;
	cout << "\t\t\t\t|          2) Eliminar cliente              |\t\t\t\t" << endl;
	cout << "\t\t\t\t|          3) Modificar cliente             |\t\t\t\t" << endl;
	cout << "\t\t\t\t|          4) Mostrar cliente               |\t\t\t\t" << endl;
	cout << "\t\t\t\t|          5) Detalles del cliente          |\t\t\t\t" << endl;
	cout << "\t\t\t\t|          6) Salir                         |\t\t\t\t" << endl;
	cout << "\t\t\t\t---------------------------------------------\t\t\t\t" << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		cout << "Ingrese cliente: ";
		cin >> x1;
		a.insertar(x1);
		break;

	case 2:
		cout << "Eliminar cliente: ";
		cin >> x2;
		a.eliminar();
		break;
	case 3:

	}
}
