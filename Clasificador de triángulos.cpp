#include <iostream>
using namespace std;

int main() {
	int lg1;
	int lg2;
	int lg3;
	cout << "calcular la forma del triangulo" << endl;
	cout << "cuanto mide el primer lado del triangulo" << endl;
	cin >> lg1;
	cout << "cuanto mide el segundo lado del triangulo" << endl;
	cin >> lg2;
	cout << "cuanto mide el tercer lado del triangulo" << endl;
	cin >> lg3;
	if (lg1 == lg2 && lg2 == lg3 && lg3 == lg1) {
		cout << "El triangulo es equilatero" << endl;
	}else if (lg1 == lg2 || lg1 == lg3 || lg2 == lg3) {
		cout << "El triangulo es isosceles" << endl;
	}else{
		cout << "El triangulo es escaleno" << endl;
	}
	return 0;
}

