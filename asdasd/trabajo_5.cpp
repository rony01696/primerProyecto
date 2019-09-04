#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int b;
	int d = 0;
	int e = 0;
	int c = 0;

	cout << "Ingrese numero binario: ";
	cin >> b;

	while (b >= 10) {

		c = 0;

		while (b >= 10) {

			b = b - 10;
			c++;
		}

		d = d + b * pow(2, e);
		e++;
		b = c;

	}

	d = d + c * pow(2, e);
	cout << endl << "Numero en decimal: " << d << endl;

	return 0;
}