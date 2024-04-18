#include <iostream>
using namespace std;
int main(){
	float numero1;
	float numero2;
	char suma;
	char resta;
	char multiplicacion;
	char division;
	int operacion;
	float resultado;
	cout << " calculadora con 2 numeros \n ingresar  primer numero: \n";
	cin >> numero1;
	cout << "ingresar  segundo numero: \n";
	cin >> numero2;
	cout << "tipos de operacion ? \n 1 => suma\n 2 => resta\n 3 => multicacion\n 4 => division\n";
	cin >> operacion;
	if (operacion == 1)
	{
		resultado = numero1 + numero2;
		cout << "resultado de la suma: ";
		cout << resultado;
	}else if (operacion == 2){
		resultado = numero1 - numero2;
		cout << "resultado de la resta: ";
		cout << resultado;
	}else if (operacion == 3){
		resultado = numero1 * numero2;
		cout << "resultado de la multiplicacion: ";
		cout << resultado;
	}else if (operacion == 4){
		resultado = numero1 / numero2;
		cout << "resultado de la division: ";
		cout << resultado;
	}else
	{
		cout << "felicidades";
	}
	
	
	return 0;
}
	
