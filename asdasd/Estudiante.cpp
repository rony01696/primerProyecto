#include "Estudiante.h"
#include<iostream>
using namespace std;
Estudiante::Estudiante(string _nombre, string _apellido, string _codigo) {
	nombre = _nombre;
	apellido = _apellido;
	codigo = _codigo;
}

string Estudiante::Obtener_nombre() {
	return nombre;
}
string Estudiante::Obtener_apellido() {
	return apellido;
}
string Estudiante::Obtener_codigo() {
	return codigo;
}