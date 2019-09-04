#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	
	int i = 0;
	cout << "ingrese un numero: ";
	cin >> a;
	int c = a / 2;

	while (c > 1 ) {
		b = a % 2;
		cout << b;
		c = a / 2;
		a = c;
	}
	cout << c;

	return 0;
	
}