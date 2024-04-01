#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0, num2 = 0, num3 = 0;
	//ciclo while
	while(num1 < 10) {
		cout << "El numero es: " << num1 << endl;
		num1++; //suma un numero
	}
	
	//ciclo do-while
	do {
		cout << "El segundo numero es: " << num2 << endl;
		num2++;
	} while (num2 < 10);
	
	cout << "Ingrese un numero por favor";
	cin >> num3;
	num1 = 0;
	while (num1 < num3) {
		cout << "Aun no llegamos al limite: " << num1 << endl;
		num1++;
	}
	
	return 0;
}

