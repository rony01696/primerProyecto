#pragma once
#include <iostream>
using namespace std;

class Empleado{

private:
	string nombre;
	string apellido;
	double salario;

public:
	Empleado();
	Empleado(string, string, double);
	string getNombre();
	string getApellido();
	double getSalario();
	double setSalarioAnual();
	double setSalarioDescuento(double salario);
	void mostrar();
};

