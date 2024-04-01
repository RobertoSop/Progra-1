#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0, num2= 0, num3 = 0;
	cout << " ingrese un numero:" ;
	cin >> num3;
	num1= 0;
	do   {
		cout << " aun no llegamos al limite:" << num1 << endl;
		num1++;
	} while ( num1 < num3);
	return 0;
}

