#include <iostream>

using namespace std;

void esPrimo(int numero) {
	bool primo = true; 
	
	if (numero <= 1) {
		primo = false;  
	} else {
		for (int i = 2; i * i <= numero && primo; i++) {
			if (numero % i == 0) {
				primo = false;  
			}
		}
	}
	
	if (primo) {
		cout << numero << " es un numero primo." << endl;
	} else {
		cout << numero << " no es un numero primo." << endl;
	}
}

int main() {
	int numero;
	cout << "Ingrese un numero para verificar si es primo: ";
	cin >> numero;
	
	if (cin.fail()) {
		cout << "Ingrese un numero valido." << endl;
		return 1;
	}
	
	esPrimo(numero);
	
	return 0;
}
