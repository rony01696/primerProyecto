
#include <iostream>
using namespace std;

int main()
{
	int a;
	int i = 1;
	cout << "ingrese a: ";
	cin >> a;
	
	while (i < a)
	{
		if (a > i)
		{
			i = i * 2;
		}
	}
	
	if (a == i)
	{
		cout << "es potencia de dos" << endl;
	}
	
	else
		cout << "no es potencia de dos" << endl;
	
	return 0;
}
	

