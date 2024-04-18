#include <iostream>
#include <cmath>
using namespace std;

void Calculadoradelangulofaltantedeuntriangulo(double n1, double n2) {
	double a, b, c, s;
	a = sqrt((n1 * n1) + (n2 * n2));
	b = sqrt((n1 * n1) - (n2 * n2));
	c = sqrt((n2 * n2) - (n1 * n1));
	s = (a + b + c) / 2;
	cout << "angulo faltante: " << s << " grados" << endl;
}

int main() {
	double lado1, lado2;
	cout << "Ingrese valor del lado 1: ";
	cin >> lado1;
	cout << "Ingrese valor del lado 2: ";
	cin >> lado2;
	Calculadoradelangulofaltantedeuntriangulo(lado1, lado2);
	return 0;
}
