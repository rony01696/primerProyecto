#include "puntero.h"
#include <iostream>
using namespace std;

puntero::puntero() {
	dato = 0;
	sig = NULL;
}

puntero::puntero(int _dato) {
	dato = _dato;
	sig = NULL;
}