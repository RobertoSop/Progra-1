#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//25 años de servicio y mayor a 65
	int anios, edad;
	cout <<" ingrese los a;os de servicio de la persona: " ;
	cin >> anios;
	
	cout << " ingrese la edad de la persona";
	cin >> edad;
	
	//ADN && 
	//alt + 38
	if (anios  >= 25 && edad >= 65) {
		cout << "ya se puede jubilar, feli;cidades";
	}else{
		cout<<"aun no puede jubilarse";
	}
	
	
	return 0;
}

