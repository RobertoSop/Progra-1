#include <iostream>
using namespace std;

int main() {
	int n1;
	int n2;
	int n3;
	
	cout << "calcular el promedio de tus notas" << endl;
	cout << "primera nota: ";
	cin >> n1;
	cout << "segunda nota: ";
	cin >> n2;
	cout << " tercera nota: ";
	cin >> n3;
	float promedio = (n1 + n2 + n3) / 3;
	if (n1 < 61 || n2 < 61 || n3 < 61){
		cout << "tener los cursos en limpios" << endl;
	}
	cout << "primera nota es: " << n1 << endl;
	cout << "segunda nota es: " << n2 << endl;
	cout << "tercera nota es: " << n3 << endl;
	cout << "promedio : " << promedio << endl;
	return 0;
}

