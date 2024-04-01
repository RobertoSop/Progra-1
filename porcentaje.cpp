#include <iostream>
 using namespace std;  

int main(){
	int salario;
	cout << "Ingrese su salario: " << endl;
	cin >> salario;
	
	if (salario <= 15000) {
		cout << "Su impuesto a pagar es del 5%" << endl;
	}
	else if (salario >= 15001 && salario <= 30000) {
		cout << "Su impuesto a pagar es del 12%" << endl;
	}
	else if (salario >= 30001) {
		cout << "Su impuesto a pagar es del 21%" << endl;
	}
}  return 0;
	


