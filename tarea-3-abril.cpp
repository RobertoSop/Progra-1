#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "Por favor ingrese un numero  " ;
	cin >> num1;
	
	switch(num1){
	case 1:
		cout << "Area comun" << endl;
		break;
	case 2:
		cout << "No nos encontramos en ese semestre" << endl;
		break;
	case 3:
		cout << "Area comun" << endl;
		break;
	case 4:
		cout << "No nos encontramos en ese semestre" << endl;
		break;
	case 5:
		cout << "Area especifica" << endl;
		break;
	case 6:
		cout << "No  nos encontramos en ese semestre" << endl;
		break;
	case 7:
		cout << "Area especifica" << endl;
		break;
	default:
		cout << "No nos encontramos en ese semestre" << endl;
	}
	cout << "Fin del switch";
	return 0;
}

