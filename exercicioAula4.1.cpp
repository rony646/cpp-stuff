#include <iostream>

#include <locale>

#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num, cubo, quad;
	cout << "Digite o número desejado: ";
	cin >> num;
	cubo = pow(num, 3);
	cout << "O cubo de " << num << " é " << cubo;
	quad = pow(num, 2);
	cout << "\nO quadrado de " << num << " é " << quad;
}
