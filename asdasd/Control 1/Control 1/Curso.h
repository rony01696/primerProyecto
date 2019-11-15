#include <iostream>
#include "Estudiante.h"
using namespace std;

class Curso {
private:
	string nombre;
	string codigo;
	Estudiante* alumnos;
	int cantidadAlumnos;

public:
	Curso();
	Curso(string, string, Estudiante*, int);
	Curso(const Curso& c);

	string getNombre();
	string getCodigo();
	Estudiante* getAlumnos();
	int getCantidadAlumnos();

	string setNombre(string);
	string setCodigo(string);
	Estudiante* setAlumnos(Estudiante*);
	int setCantidadAlumnos(int);

	void Aumentar();

};
