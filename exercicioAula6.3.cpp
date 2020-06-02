#include <iostream>

#include <locale>

#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int lado1, lado2, lado3;
	
	cout << "Digite o valor do primeiro lado: ";
	cin >> lado1;
	
	cout << "Digite o valor do segundo lado: ";
	cin >> lado2;
	
	cout << "Digite o valor do terceiro lado: ";
	cin >> lado3;
	
	if(lado1 == lado2 && lado2 == lado3) {
		cout << "O triangulo é equlatero!";
	}
	
	else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
		cout << "O triangulo é isoceles";
	}
	
	else {
		cout << "O triangulo é escaleno";
	}
	
}
