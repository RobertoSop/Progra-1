#include <iostream>
using namespace std;

void mostrarMensaje(){
	system("cls");
	cout << "Hola por favor ingresa una opcion: " << endl;
	cout << "Existe de la opcion 1 a la 5" << endl;
}
	
	void mostrarMensaje1(){
		system("cls");
		cout << "Bienvenido a Irtra" << endl;
	}
		
		void mostrarMensaje2(){
			system("cls");
			cout << "Bienvenido al mundo de la Diversion " << endl;
		}
			
			void mostrarMensaje3(){
				system("cls");
				cout << "Disfruta nuestro juegos mecamincos" << endl;
			}
				
				void mostrarMensaje4(){
					system("cls");
					cout << "Disfruta nuestros actractivos Toboganes " << endl;
				}
					void mostrarMensaje5(){
						system("cls");
						cout << "Que tenga un dia inolvidable " << endl;
					}
						
						int main(int argc, char *argv[]) {
							int acc;
							int control = 1;
							
							do {
								mostrarMensaje();
								cin >> acc;
								
								if (acc == 1) {
									mostrarMensaje1();
								} else if (acc == 2) {
									mostrarMensaje2();
								} else if (acc == 3) {
									mostrarMensaje3();
								} else if (acc == 4) {
									mostrarMensaje4();
								} else if (acc == 5) {
									mostrarMensaje5();
								} else {
									cout << "Ingrese opcion" << endl;    
								}
								
								
								cout << endl << "Quiere continuar? 1. Si, 2. No";
								cin >> control;
								if (control != 1 && control != 2) {
									control = 1;
									cout << "Siga instrucciones";
								}
							} while (control == 1);
				return 0;
						}
