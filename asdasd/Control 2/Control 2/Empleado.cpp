#include "Empleado.h"
Empleado::Empleado() {
	string nombre = "";
	string apellido = "";
	double salario = 0;
}
Empleado::Empleado(string _nombre, string _apellido, double _salario) {
	nombre = _nombre;
	apellido = _apellido;
	salario = _salario;
}

string Empleado::getNombre() {
	return nombre;
}
string Empleado::getApellido() {
	return apellido;
}
double Empleado::getSalario() {
	if (salario <= 0) {
		return 0;
	}
	else {
		return salario;
	}
}

double Empleado::setSalarioAnual() {
	if (salario <= 0) {
		return 0;
	}
	else {
		return salario * 12;
	}
}
double Empleado::setSalarioDescuento(double salario) {
	if (salario <= 0) {
		return 0;
	}
	else {
		return (salario-((salario*10)/100));
	}
}

void Empleado::mostrar() {
	cout << "El nombre es: " << nombre << endl;
	cout << "El apellido es: " << apellido << endl;
	cout << "El salario mensual es: " << salario << endl;
	cout << "El salario anual es: " << salario * 12 << endl;
}