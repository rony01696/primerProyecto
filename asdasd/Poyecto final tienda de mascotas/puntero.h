#pragma once
#ifndef PUNTERO_H
#define PUNTERO_H
#include <iostream>
using namespace std;



class puntero {
public:
	int dato;
	puntero* sig;


	puntero();
	puntero(int);
};

#endif // PUNTERO_H
