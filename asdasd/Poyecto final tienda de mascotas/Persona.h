#pragma once
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;
class Persona{
private:
	string nombre;
	string apellido;
	int edad;
	string direccion;
public:
	Persona(string, string, int, string);
	string mostrar_nombre();
	string mostrar_apellido();
	int mostrar_edad();
	string mostrar_direccion();
};

#endif // PERSONA_H