#include <iostream>

using namespace std;

int main(){
	int a1;
	cout << "Ingresa un año para verificar si es biciesto: \n";
	cin >> a1;
	if ((a1 % 4 == 0 and a1 % 100 != 0) or a1 % 400 == 0)
	{
		cout << a1 << " es biciesto" << endl;
	}else
	{
		cout << a1 << " no es biciesto" << endl;
	}
	
	return 0;
}
	
