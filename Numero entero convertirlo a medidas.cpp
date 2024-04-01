#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	float cantidad;
	int opcion;
	cout << "Ingresa un numero entero :" ;
	cin >> cantidad;
	
	cout << "Que conversion de medidas quieres hacer: " << endl;
	cout << "1. Millas a yardas " << endl;
	cout << "2. Millas a pies " << endl;
	cout << "3. Millas a pulgadas" << endl;
	cout << "Opcion: ";
	cin >> opcion;
	
	if (opcion == 1) {
		cout << cantidad << " millas son " << cantidad * 1760 << " yardas." << endl;
	}
	else if (opcion == 2) {
		cout << cantidad << "millas son  " << cantidad * 5280 << " pies. " << endl;
	}
	else if (opcion == 3) {
		cout << cantidad << " milas son " << cantidad * 63360 << " pulgadas." << endl;
	}
	
	return 0;
}

