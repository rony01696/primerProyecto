
#include <iostream>
using namespace std;



class Estudiante {
private:
	string nombre;
	string apellido;
	string codigo;


public:
	Estudiante();
	Estudiante(string, string, string);

	string getNombre();
	string getApellido();
	string getCodigo();

};
