#include <iostream>
#include <cstdlib> 
using namespace std;

void multipli(int num) {
	cout << "Múltiplos de " << num << ": ";
	for (int wirii = 1; wirii <= 10000; ++wirii) {
		if (wirii % num == 0) {
			cout << wirii << " ";
		}
	}
	cout << endl;
}

void fact(int num) {
	int fact = 1;
	for (int wiro = 1; wiro <= num; ++wiro) {
		fact *= wiro;
	}
	cout << "Factorial " << num << ": " << fact << endl;
}

void Fibo(int num) {
	int a = 0, b = 1, c;
	cout << "Serie de Fibonacci " << num << ":" << endl;
	cout << a << " " << b << " ";
	
	for (int wiro = 2; wiro < num; ++wiro) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
}

void mostrarMensaje() {
	cout << "Ingresa primer número: ";
}

void mostrarMensaje2() {
	cout << "Seleccione una acción:" << endl;
	cout << "1. Encontrar múltiplos del número." << endl;
	cout << "2. Calcular el factorial del número." << endl;
	cout << "3. Calcular la serie de Fibonacci del número." << endl;
}

int main(int argc, char *argv[]) {
	int num, acc;
	int control = 1;
	do {
		mostrarMensaje();
		cin >> num;
		mostrarMensaje2();
		cin >> acc;
		
		switch (acc) {
		case 1:
			multipli(num);
			break;
		case 2:
			fact(num);
			break;
		case 3:
			Fibo(num);
			break;
		default:
			cout << "Opción no aceptada." << endl;
			break;
		}
	} while (control);
	
	return 0;
}
