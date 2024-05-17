#include <iostream>
#include <string>
using namespace std;
string cifrar(const string& cadena) {
	string resultado = cadena;
	int longitud = resultado.length(); 
	for (int i = 0; i < longitud; i++){
		char caracter = resultado[i];
		if(caracter == 'i') {
			resultado[i] = '1';
		} else if(caracter == 'e') {
			resultado[i] = '3';
		} else if(caracter == 'a') {
			resultado[i] = '4';
		} else if(caracter == 'o') {
			resultado[i] = '0';
		} else if(caracter == 'u') {
			resultado[i] = '*';
		}
	}
	return resultado;
}
int main(int argc, char *argv[]) {
	string frase, fraseCifrada;
	cout << "Ingrese una frase para cifrarla: ";
	getline(cin, frase);
	fraseCifrada = cifrar(frase);
	cout << endl << "Frase cifrada: " << fraseCifrada;
	
	return 0;
}
