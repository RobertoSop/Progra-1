#include <iostream>
int main(int argc, char *argv[]) {
	using namespace std;
		//Graduarse de la universidad
		cout << "¿Va a estudiar en la universidad?" << endl << "1. Si 2. No" ;
		int estudiar;
		cin >> estudiar;
		if (estudiar == 1){
			cout << "¿Ya esta estudiando en la universidad?" << endl << "1. Si 2. No" ;
			int estudiar_ya;
			cin >> estudiar_ya;
			if (estudiar_ya == 1){
				cout << "¿Terminará la carrera?" << endl << "1. Si 2. No";
				int carrera;
				cin >> carrera;
				if (carrera == 1){
					cout << "¿Ganó todos los semestres?" << endl << "1. Si 2. No";
					int semestre;
					cin >> semestre;
					if (semestre == 1){
						cout << "¿Realizará el examen privado?" << endl << "1. Si 2. No";
						int examen;
						cin >> examen;
						if (examen == 1){
							cout << "¿Ganó el examen privado?" << endl << "1. Si 2. No";
							int examen2;
							cin >> examen2;
							if (examen2 == 1){
								cout << "Felicidades, se ha graduado de la universidad";
							}
						}else {
							cout << "Cerrará solo los cursos y semestres aprobados";
						}
					}else {
						cout << "Retirarse de la carrera y no graduarse de la universidad";
					}
				}else {
					cout << "Retirarse de la carrera y no graduarse";
				}
			}else {
				cout << "Iniciar la carrera para graduarse";
			}
		}else {
			cout << "No estudiar en la universidad y no me graduarse";
		}
	return 0;
}

