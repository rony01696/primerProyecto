#include "Curso.h"
#include <iostream>


using namespace std;




int main() {

	Estudiante e1("Rony", "Huaycani", "75944871");
	cout << e1.getNombre() << endl;
	cout << e1.getApellido() << endl;
	cout << e1.getCodigo() << endl;
	cout << endl;
	
	Estudiante e2("Berlin", "Taipe", "78451599");
	cout << e2.getNombre() << endl;
	cout << e2.getApellido() << endl;
	cout << e2.getCodigo() << endl;
	
	Estudiante listaEstudiantes[] = { e1,e2 };
	cout << endl;

	Curso c1("Matematicas", "516655", listaEstudiantes, 2);
	Curso c2 = c1;
	cout << c1.getNombre() << endl;
	cout << c1.getCodigo() << endl;
	cout << c1.getAlumnos() << endl;
	cout << c1.getCantidadAlumnos() << endl;


	cout << endl;

	cout << c2.getNombre() << endl;
	cout << c2.getCodigo() << endl;
	cout << c2.getAlumnos() << endl;
	cout << c2.getCantidadAlumnos() << endl;

	c1.setNombre("Programacion");
	c1.Aumentar();

	cout << endl;

	cout << c1.getNombre() << endl;
	cout << c2.getNombre() << endl;

	cout << endl;

	
	cout << (listaEstudiantes)->getApellido() << endl;
	cout << (listaEstudiantes + 1)->getApellido() << endl;
	cout << c1.getCantidadAlumnos() << endl;
	cout << c1.getAlumnos() << endl;
	cout << endl;
	
	
	
}