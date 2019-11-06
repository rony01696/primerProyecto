#include "Persona.h"
using namespace std;
Persona::Persona(string _nombre, string _apellido, int _edad, string _direccion) {
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	direccion = _direccion;
}

string Persona::mostrar_nombre() {
	return nombre;
}
string Persona::mostrar_apellido() {
	return apellido;
}
int Persona::mostrar_edad() {
	return edad;
}
string Persona::mostrar_direccion() {
	return direccion;

}