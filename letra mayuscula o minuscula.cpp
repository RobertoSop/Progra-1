#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	cout <<" Ingresa una letra : ";
	cin >> letra;
	
	if (letra >= 'A' && letra <= 'Z') {
		cout << "La letra '" << letra << "' es may�scula." << endl;
	}
	else if (letra >= 'a' && letra <= 'z') {
		cout << "La letra '" << letra << "' es min�scula." << endl;
	}
	else {
		cout << "El caracter ingresado no es una letra." << endl;
	}
	
	
	return 0;
}

