#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "puntero.h"
using namespace std;


class menu{
private:
	puntero* Inicio;
public:
	menu();
	void insertar(int);
	void eliminar();
	void mostrar(int);


};

#endif // PUNTERO_H