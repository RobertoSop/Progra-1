#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	int sueldo;
	float resultado;
	cout << "ingrese los años trabajando  para calcular el impuesto,\vverdad y no mentir: \n";
	cin >> anio;
	cout << "ingrese su salario:\nQ"; 
	cin >> sueldo;
	if (anio <= 5 ){
		resultado = sueldo * 0.05;
		cout << " impuesto al pagar: \nQ" << resultado << endl; 
	}else { 
		resultado = sueldo * 0.10;
		cout << "impuesto al pagar : \nQ" << resultado << endl;
	}
	return 0;
}

