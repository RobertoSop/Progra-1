#include<iostream>
using namespace std;
int main(){
	int n,n1,n2,t;
	do
	{
		cout << "Bienvenidos al menu de la calculadora" << endl;
		cout << "1.Suma, 2.Resta, 3.Multiplicacion, 4.Division" << endl;
		cin >> t;
		switch (t){
		case 1:
			cout << "ingresa primer numero: ";
			cin >> n1;
			cout << endl;
			cout << "ingresa segundo numero: ";
			cin >> n2;
			cout << n1 + n2 << endl;
			break;
		case 2:
			cout << "ingresa primer numero: ";
			cin >> n1;
			cout << endl;
			cout << "ingresa segundo numero: ";
			cin >> n2;
			cout << n1 - n2 << endl;
			break;
		case 3:
			cout << "ingresa primer numero: ";
			cin >> n1;
			cout << endl;
			cout << "ingresa segundo numero: ";
			cin >> n2;
			cout << n1 * n2 << endl;
			break;
		case 4:
			cout << "ingresa primer numero: ";
			cin >> n1;
			cout << endl;
			cout << "ingresa segundo numero: ";
			cin >> n2;
			cout << n1 / n2 << endl;
			break;
		default:
			cout << "La opcion no lo tienes descargado " << endl;
			break;
		}
		cout << "Desea continuar? 1.Si 2.No" << endl;
		cin >> n;
	} while (n == 1);
	cout << "llegaste al limite de navegacion en la calculadora " << endl;
	return 0;
}
	
	
	
	


	
