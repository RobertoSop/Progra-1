#include <iostream>
using namespace std;

int main(){
	string nombreEstudiante;
	cout << "ingresar nombre de un estudiante" << endl;
	getline(cin, nombreEstudiante, '\n');
	cout << "buenos dias" << nombreEstudiante << endl;
	return 0;
}
	
