#include <iostream>

using namespace std;

int main() {
	int dinerodados, hasgastado;
	
	cout << "Ingrese Dinero dado: ";
	cin >> dinerodados;
	cout << "Ingrese cantidad gastada: ";
	cin >> hasgastado;
	
	
	while (hasgastado > dinerodados) {
		cout << "Lo gastado no puede ser mayor al dinero  dado." << endl;
		cout << "Ingrese cantidad de dinero dado: ";
		cin >> dinerodados;
		cout << "Ingrese cantidad gastada: ";
		cin >> hasgastado;
	}
	
	int vuelto = dinerodados - hasgastado;
	
	cout << "El vuelto es: " << vuelto << " Quetzales" << endl;
	
	return 0;
}
