#include <iostream>

void cloneArray(int src[], int dst[], int size) {
	for (int i = 0; i < size; i++) {
		dst[i] = src[i];
	}
	std::cout << "\nArreglo clonado: ";
	for (int i = 0; i < size; i++) {
		std::cout << dst[i] << " ";
	}
}
int main() {
	int originalArray[5];
	int clonedArray[5];
	int size = sizeof(originalArray) / sizeof(originalArray[0]);
	
	std::cout << "Ingresa " << size << " numeros :\n";
	for (int i = 0; i < size; i++) {
		std::cin >> originalArray[i];
	}
	cloneArray(originalArray, clonedArray, size);
	return 0;
}
