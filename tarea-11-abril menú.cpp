#include <iostream>
#include <string>
using namespace std;
int pedirNumero(){
	int n1;
	cout << "Ingresar un numero" << endl;
	cin >> n1;
	return n1;
}
	string pedirPalabra(){
		string p1;
		cout << "Ingresar una palabra" << endl;
		cin >> p1;
		return p1;
	}
		char pedirLetras(){
			char l1;
			cout << "Ingresar un caracter" << endl;
			cin >> l1;
			return l1;
		}
			int main(){
				int n1, n2, r1;
				string r2;
				char r3;
				do{
					cout << "Quiere continuar? 1.Si 2.No" << endl;
					cin >> n1;
					if (n1 != 1){
						cout << "Elige una de las opciones" << endl;
						cout << "1. Solicitar un numero" << endl;
						cout << "2. Solicitar  una palabra" << endl;
						cout << "3. Solicitar una letra" << endl;
						cin >> n2;
						switch (n2)
						{
						case 1:
							r1 = pedirNumero();
							cout << "El numero es: " << r1 << endl;
							break;
						case 2:
							r2 = pedirPalabra();
							cout << "La palabra es: " << r2 << endl;
							break;
						case 3:
							r3 = pedirLetras();
							cout << "El caracter es: " << r3 << endl;
							break;
						default:
							cout << "opcion no encontrada " << endl;
							break;
						}
					}
				}while (n1 != 1);
				cout << "Salir  del cliclo" << endl;
				return 0;
			}

