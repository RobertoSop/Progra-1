#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//comprar un carro 
	//Resolucion de problemas con condiciones anidadas
	cout << "¿tengo dinero para comprar el carro? 1. Si, 2. No";
	int dinero;
	cin >> dinero;
	if (dinero  == 1) {
		cout <<"buscar carro";
		cout << endl;
		cout << "encontre el modelo que me gusta? 1. Si, 2. No";
		int carro;
		cin >> carro;
		if (carro== 1) {
			cout << "precio del carro? ";
			double dinero;
			cin >> dinero;
			cout << "Cuanto es tu presupuesto? ";
			double dinero_carro;
			cin >> dinero_carro;
		} else { " no me alcanza para el carro";
		}else  {
		cout << "No tengo dinero para comprar el carro ";
	     }
return 0;
}
