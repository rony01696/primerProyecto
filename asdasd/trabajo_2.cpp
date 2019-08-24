#include <iostream>
using namespace std;

int main()
{
	int a;
	int i = 0;
	int ii = 0;
	int suma1 = 0;
	int suma2 = 0;
	cout << "Ingrese un numero: ";
	cin >> a;
	
	while (i <= a)
	{
		suma1 = suma1 + i;
		i = i + 3;	
	}
	while (ii <= a) 
	{
		suma2 = suma2 + ii;
		ii = ii + 5;
	}
	cout << suma1+suma2;
	return 0;

}

