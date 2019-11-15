
#include "Estudiante.h"

Estudiante::Estudiante() {
	nombre = "";
	apellido = "";
	codigo = "";
}

Estudiante::Estudiante(string _nombre, string _apellido, string _codigo) {
	nombre = _nombre;
	apellido = _apellido;
	codigo = _codigo;
}

string Estudiante::getNombre() {
	return nombre;
}
string Estudiante::getApellido() {
	return apellido;
}
string Estudiante::getCodigo() {
	return codigo;
}
