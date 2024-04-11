#include <iostream>
#include <cstdlib> 
using namespace std;

double calculadora(double num1, double num2, double num3) {
	double resultado;
	resultado = num1 + num2 + num3;
	return resultado;
}

void mostrarMensaje(const string& mensaje) {
	system("cls");
	cout << "Hola, " << mensaje << ": ";
}

int main() {
	double num1, num2, num3;
	mostrarMensaje("ingresa el primer numero");
	cin >> num1;
	mostrarMensaje("ingresa el segundo numero");
	cin >> num2;
	mostrarMensaje("ingresa el tercer numero");
	cin >> num3;
	
	double resultado = calculadora(num1, num2, num3);
	cout << endl << "Su resultado es: " << resultado << endl;
	
	return 0;
}
