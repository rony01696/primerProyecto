#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(){
	Estudiante e1("rony", "huaycani", "75277");
	
	cout<<e1.Obtener_nombre()<<endl;
	cout << e1.Obtener_apellido() << endl;
	cout << e1.Obtener_codigo() << endl;

	return 0;
}

