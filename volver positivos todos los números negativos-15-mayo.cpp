#include <iostream>
using namespace std;

void makePositiveArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			arr[i] = -arr[i];
		}
	}
}
int main() {
	int arr1[10]; 
	cout << "Ingresa 10 números: ";
	for (int i = 0; i < 10; i++) {
		cin >> arr1[i];
	}
	makePositiveArray(arr1, 10);
	cout << "Arreglo con los negativos convertidos a positivos: ";
	for (int i = 0; i < 10; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
	return 0;
}
