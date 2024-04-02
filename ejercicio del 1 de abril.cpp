#include<iostream>
using namespace std;

int main(){
	int n1 = 0;
	int n2 = 1;
	int lim;
	cout << "Ingresa un limite del Fibonachi" << endl;
	cin >> lim;
	while (n1 < lim)
	{
		cout << n1 << endl;
		n1 = n1 + n2;
		n2 = n1 - n2;
	}
	return 0;
}
