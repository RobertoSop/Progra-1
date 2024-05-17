#include <iostream>
using namespace std;
void decimals(double decimalArr[], int intPart[], double fracPart[], int size) {
	for (int i = 0; i < size; i++) {
		intPart[i] = static_cast<int>(decimalArr[i]);
		fracPart[i] = decimalArr[i] - intPart[i];
	}
}
int main() {
	double arrayDecimals[5];
	int partInt[5];
	double partDecimals[5];
	
	cout << "Ingrese 5 números decimales: ";
	for (int i = 0; i < 5; i++) {
		cin >> arrayDecimals[i];
	}
	decimals(arrayDecimals, partInt, partDecimals, 5);
	cout << "Parte entera: ";
	for (int i = 0; i < 5; i++) {
		cout << partInt[i] << " ";
	}
	cout << "\nParte decimal: ";
	for (int i = 0; i < 5; i++) {
		cout << partDecimals[i] << " ";
	}
	cout << endl;
	
	return 0;
}
