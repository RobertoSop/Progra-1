#include <iostream>
using namespace std;

int main() {
	int numero;
	cout << "positivo o negativo y si es par o impar" << endl;
	cin >> numero;
	if (numero > 0) {
		if (numero % 2 == 0) 
		{
			cout << numero << " Es positivo y es par" << endl;
		}else
		{
			cout << numero << " Es positivo y es impar" << endl;
		}
	}else if (numero < 0){
	if (numero % 2 == 0) 
	{
		cout << numero << " Es negativo y es par" << endl;
	}else{
		cout << numero << " Es negativo y es impar" << endl;
	}
}
return 0;
}



