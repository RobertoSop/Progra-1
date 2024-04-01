#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//como tener una redSocial 
	bool QuieresNavegarEnRedes;
	int RedSocialElegida;
	string Correo;
	string Usuario;
	string Contrasena;
	string Amigos;
	bool FotoDePerfil;
	bool foto;
	cout << "Para Responder usa 1 para si y 0 para no" << endl;
	cout << "Quieres usar una red social?" << endl;
	cin >> QuieresNavegarEnRedes;
	if (QuieresNavegarEnRedes)
	{
		cout << "Te voy a mostrar una lista de redes sociales y me dices cual quieres" << endl;
		cout << "1. Twitter" << endl;
		cout << "2. Facebook" << endl;
		cout << "3. Instagram" << endl;
		cout << "4. Tumblr" << endl;
		cout << "5. YouTube" << endl;
		cin >> RedSocialElegida;
		if (RedSocialElegida >=1 || RedSocialElegida <=5)
		{
			cout << "¿Tienes una cuenta?" << endl;
			cin >> RedSocialElegida;
			if (RedSocialElegida)
			{
				cout << "Dame tu correo: ";
				cin >> Correo;
				cout << "Felicidades has iniciado sesion. Puedes navegar tranquilo";
			}else{
				cout << "vamos a crear un usuario y contraseña" << endl;
				cout << "Dame tu Usuario: ";
				cin >> Usuario;
				cout << endl;
				cout << "Dame tu correo: ";
				cin >> Correo;
				cout << endl;
				cout << "Dame tu contraseña: ";
				cin >> Contrasena;
				cout << endl;
				
				cout << "Felicidades Ya Estas Registrado. Puedes navegar" << endl;
				cout << "¿Quieres Agregar Amigos?" << endl;
				cin >> QuieresNavegarEnRedes;
				if (    QuieresNavegarEnRedes)
				{
					cout << "Busca a algun amigo" << endl;
					cout << "ingresa su nombre" << endl;
					cin >> Amigos;
					cout << "Agregaste a " << Amigos << endl;
					cout << "Puedes seguir navegando"<< endl;
					cout << "¿te gustaria poner foto de perfil?" << endl;
					cin >> FotoDePerfil;
					if (FotoDePerfil)
					{
						cout << "ingresar a perfil" << endl;
						cout << "ingresa a donde dice foto" << endl;
						cin >> foto;
						cout << "Agregaste foto " << foto << endl;
						cout << "foto subida";
					}else
					{
						cout << "foto no subida" << endl;
					}
				}else
				{
					cout << "Puedes seguir navegando" << endl;
				}
				
				
			}
			
		}else
		{
			cout << "Losiento No tengo esa red Social" << endl;
		}
		
		
	}else{
		cout << "Ok, Sigue haciendo lo que estas haciendo" << endl;
	}
	return 0;
}
