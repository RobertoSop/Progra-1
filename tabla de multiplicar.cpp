
#include <iostream>
	
	using namespace std;

void tablaMultiplicar(int numero) {
	cout << "Tabla de multiplicar " << numero << ":\n";
	for (int i = 1; i <= 10; i++) {
		int resultado = numero * i;
		cout << numero << " x " << i << " = " << resultado << "\n";
	}
}

int main() {
	int numero;
	cout << "Ingrese un numero para realizar su  tabla: ";
	cin >> numero;
	
	if (cin.fail()) {
		cout << " Ingrese un numero valido." << endl;
		return 1;
	}
	
	tablaMultiplicar(numero);	
	
	return 0;
}
