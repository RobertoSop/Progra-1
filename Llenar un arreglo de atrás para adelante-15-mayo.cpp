#include <iostream>
int main() {
	const int tamano = 5; 
	int arreglo[tamano];
	std::cout << "Ingrese " << tamano << " n�meros para hacer un arreglo de atras para adelante:\n";
	for (int i = tamano - 1; i >= 0; --i) {
		std::cout << "Ingrese el valor para la posici�n " << i << ": ";
		std::cin >> arreglo[i];
	}
	std::cout << "El arreglo es: ";
	for (int i = 0; i < tamano; ++i) {
		std::cout << arreglo[i] << " ";
	}
	std::cout << "\n";
	
	return 0;
}
