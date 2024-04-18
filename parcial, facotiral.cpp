#include <iostream>

using namespace std;

int main() {
	int num;
	int factorial = 1;
	
	cout << "Ingresar un número entero para calcular su factorial: ";
	cin >> num;
	
	if (num < 0) {
		cout << "El factorial no funciona para negativo." << endl;
	} else {
		for (; num > 1; --num) {
			factorial *= num;
		}
		cout << "El factorial es " << factorial << endl;
	}
	
	return 0;
}

