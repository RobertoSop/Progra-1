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
			if (dinero < dinero_carro) {
				cout << "Si le alcanza comprelo" << endl;
			}
			if ( carro  == 1) {
				cout <<"esta bien los neomaticos aun? 1. Si, 2. No ";
				cout << endl;
				cin >> carro;
				if(carro == 1){
					cout << "buen estado  "<< endl;	
				}else {
					cout <<" mal estado"<< endl;
				}
			}else {
				cout << "no lo esta ";
			}
			if ( carro  == 1) {
				cout <<"te gusto el color? 1. Si, 2. No ";
				cout << endl;
				cin >> carro;
				if(carro == 1){
					cout << "me encato el color ";	
				}else {
					cout <<" es color rosa";
				}
			}else {
				cout << "no me gusto ";
			}
		}
		else {
			cout << "No lo encontre ";
		}
	} 
	else {
		cout << "No tengo lo suficiente para el carro";
	}
	//Ya no seguimos escribiendo para abajo
	return 0;
}

