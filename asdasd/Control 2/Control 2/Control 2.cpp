#include <iostream>
using namespace std;
#include "Empleado.h"


void burbuja2(Empleado arr[], int tam) {
	
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam-1; j++) {
			if (static_cast<int>(arr[j].getApellido()[0]) > static_cast<int>(arr[j + 1].getApellido()[0])) {
				Empleado aux;
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
		tam--;
	}
}


int main(){
	
	Empleado e1("Rony", "Huaycani", 1000);
	Empleado e2("Eduardo", "Huaycani", 1500);
	Empleado e3("Berlin", "Taipe", 1400);
	
	cout << e1.getNombre() << endl;
	cout << e1.getApellido() << endl;
	cout << e1.getSalario() << endl;
	cout << e1.setSalarioAnual() << endl;
	cout << e1.setSalarioDescuento(e1.setSalarioAnual()) << endl;

	cout << endl;

	cout << e2.getNombre() << endl;
	cout << e2.getApellido() << endl;
	cout << e2.getSalario() << endl;
	cout << e2.setSalarioAnual() << endl;
	cout << e2.setSalarioDescuento(e2.setSalarioAnual()) << endl;

	cout << endl;

	cout << e3.getNombre() << endl;
	cout << e3.getApellido() << endl;
	cout << e3.getSalario() << endl;
	cout << e3.setSalarioAnual() << endl;
	cout << e3.setSalarioDescuento(e3.setSalarioAnual()) << endl;
	
	cout << endl;
	Empleado listaEmpleados[] = { e1,e2,e3 };
	
	burbuja2(listaEmpleados, 3);
	for (int i = 0; i < 3; i++) {
		cout << listaEmpleados[i].getApellido() << endl;
	}
}

