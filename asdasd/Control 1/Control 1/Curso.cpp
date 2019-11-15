#include "Curso.h"


Curso::Curso() {
	nombre = "";
	codigo = "";
	cantidadAlumnos = 0;
	alumnos = new Estudiante[cantidadAlumnos];
}

Curso::Curso(string _nombre, string _codigo, Estudiante* _alumnos, int _cantidadAlumnos) {
	nombre = _nombre;
	codigo = _codigo;
	cantidadAlumnos = _cantidadAlumnos;
	alumnos = _alumnos;
}

Curso::Curso(const Curso& c) {
	nombre = c.nombre;
	codigo = c.codigo;
	cantidadAlumnos = c.cantidadAlumnos;
	alumnos = c.alumnos;
}

string Curso::getNombre() {
	return nombre;
}
string Curso::getCodigo() {
	return codigo;
}
Estudiante* Curso::getAlumnos() {
	return alumnos;
}
int Curso::getCantidadAlumnos() {
	return cantidadAlumnos;
}

string Curso::setNombre(string _nombre) {
	nombre = _nombre;
	return nombre;
}
string Curso::setCodigo(string _codigo) {
	codigo = _codigo;
	return codigo;
}
Estudiante* Curso::setAlumnos(Estudiante* e) {
	alumnos = e;
	return e;
}
int Curso::setCantidadAlumnos(int _cantidadAlumnos) {
	cantidadAlumnos = _cantidadAlumnos;
	return cantidadAlumnos;
}

void Curso::Aumentar() {
	cantidadAlumnos++;
}