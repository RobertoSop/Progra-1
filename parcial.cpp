#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

char tablero[3][3];
string jugador1, jugador2;
char simbolo1, simbolo2;
bool turnoJugadorX = true;  
void limpiarConsola() {
	cout << "\033[2J\033[1;1H"; 
}
void iniciarTablero() {
	limpiarConsola();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tablero[i][j] = '-';
		}
	 }
}
void mostrarTablero() {
	cout << " 1 | 2 | 3 " << endl;
	cout << "---|---|---" << endl;
	cout << " 4 | 5 | 6 " << endl;
	cout << "---|---|---" << endl;
	cout << " 7 | 8 | 9 " << endl;
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tablero[i][j];
			if (j < 2) cout << " | ";
		}
		cout << endl;
		if (i < 2) cout << "---|---|---" << endl;
	}
	cout << endl;
}
bool tableroCompletado() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (tablero[i][j] == '-') return false;
		}
	}
	return true;
}
bool verificarGanador(char simbolo) {
	for (int i = 0; i < 3; i++) {
		if ((tablero[i][0] == simbolo && tablero[i][1] == simbolo && tablero[i][2] == simbolo) ||
			(tablero[0][i] == simbolo && tablero[1][i] == simbolo && tablero[2][i] == simbolo)) {
			return true;
		}
	}
	if ((tablero[0][0] == simbolo && tablero[1][1] == simbolo && tablero[2][2] == simbolo) ||
		(tablero[0][2] == simbolo && tablero[1][1] == simbolo && tablero[2][0] == simbolo)) {
		return true;
	}
		return false;
}
void movimientoJugador() {
	int numero;
	char simbolo = turnoJugadorX ? 'X' : 'O';
	string jugador = (simbolo == simbolo1) ? jugador1 : jugador2;
	
	cout << jugador << ", tu turno (1-9): ";
	cin >> numero;
	
	int fila = (numero - 1) / 3;
	int columna = (numero - 1) % 3;
	
	if (numero < 1 || numero > 9 || tablero[fila][columna] != '-') {
		cout << "Movimiento inválido. Intente de nuevo." << endl;
		movimientoJugador();
	} else {
		tablero[fila][columna] = simbolo;
		limpiarConsola();
	}
}
void lanzarDadoParaTurno() {
	std::srand(std::time(0)); 
	int numeroDado = std::rand() % 6 + 1; 
	
	cout << "El número del dado es: " << numeroDado << endl;
	turnoJugadorX = (numeroDado % 2 == 0); 
	cout << "El jugador con el símbolo " << (turnoJugadorX ? 'X' : 'O') << " tiene el primer turno." << endl;
}
int main() {
	cout << "Bienvenido al juego de Totito :)" << endl;
	cout << "Ingrese el nombre del primer jugador:) ";
	cin >> jugador1;
	
	cout << "Ingrese el nombre del segundo jugador:) ";
	cin >> jugador2;
	
	cout << jugador1 << ", elige tu símbolo para jugar (X/O): ";
	cin >> simbolo1;
	simbolo1 = toupper(simbolo1);
	simbolo2 = (simbolo1 == 'X') ? 'O' : 'X';
	cout << "Símbolo para " << jugador1 << ": " << simbolo1 << endl;
	cout << "Símbolo para " << jugador2 << ": " << simbolo2 << endl;
	
	lanzarDadoParaTurno();
	bool jugarOtraVez = true;
	while (jugarOtraVez) {
		iniciarTablero();
		bool finDeLaPartida = false;
		
		while (!finDeLaPartida) {
			mostrarTablero();
			movimientoJugador();
			
			if (verificarGanador('X')) {
				cout << (simbolo1 == 'X' ? jugador1 : jugador2) << " Felicidades fuiste el mejor jugador de Totito :)" << endl;
				finDeLaPartida = true;
			} else if (verificarGanador('O')) {
				cout << (simbolo1 == 'O' ? jugador1 : jugador2) << " Felicidades fuiste el mejor jugador de  Totito :)" << endl;
				finDeLaPartida = true;
			} else if (tableroCompletado()) {
				cout << "Es un empate, busquen una mejor técnica :( " << endl;
				finDeLaPartida = true;
			}
			turnoJugadorX = !turnoJugadorX;
		}
		cout << "¿Quieres seguir jugando!!! (SI/NO): ";
		string respuesta;
		cin >> respuesta;
		jugarOtraVez = (respuesta == "SI" || respuesta == "si");
	}
	cout << "Gracias por Participar:)" << endl;
	return 0;
}

