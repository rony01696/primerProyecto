#include "insertar.h"
#include <iostream>
using namespace std;
#include "puntero.h"
menu::menu() {
	Inicio = NULL;
}

void menu::insertar(int _Inicio) {
	if (Inicio == NULL) {
		Inicio = new puntero(_Inicio);
	}

	else {
		puntero* Final = Inicio;

		while (Final->sig != NULL) {
			Final = Final->sig;
		}
	}
}

void menu::eliminar() {

	if (Inicio == NULL) {
	}
	else{
		if (Inicio->sig == NULL) {

			delete Inicio;
			Inicio = NULL;
		}
		else {
			puntero* Adios;
			puntero* Recorrido = Inicio;
			while (Recorrido -> sig != NULL) {
				Adios = Recorrido;
				Recorrido = Recorrido->sig;
			}
			Adios->sig == NULL;
			delete Recorrido;

		}


	}
}
void menu::mostrar(int _Inicio) {
	if (Inicio == NULL) {
		Inicio = new puntero(_Inicio);
	}
	cout << ;




}