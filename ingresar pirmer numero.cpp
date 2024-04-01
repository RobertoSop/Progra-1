#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	 int num1, num2;
	cout << " ingresar el primer numero: " ;
	cin >> num1;
	cout << "ingrese el segundo numero: " ;
    cin >> num2;
	//utilizar diferentes condiciones 
	// uso  de ==
	if (num1 == num2){
		cout << " los numeros son igualitos" << endl;
		
	};
	//uso de >=
	if (num1 >= num2){
		cout << " el numero 1 es mayor o igual al numero 2" << endl;
	}
	//uso de >-
	if (num1 <= num2){
		cout << " el numero 1 es menor o igual al numero 2" << endl;
	}
	//uso de <
	if (num1 > num2){
		cout << " el numero 1 es mayor al numero 2" << endl;
	}
	//uso de >
	if (num1 < num2){
		cout << " el numero 1 es memor al numero 2" << endl;
}
	return 0;
}


