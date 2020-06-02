#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int numMes;
	char mes;
	
	cout << "Digite o numero do mes: ";
	cin >> numMes;
	
	if(numMes == 1) {
		mes = 'janeiro';
	}
	
	if(numMes == 2) {
		mes = 'fevereiro';
	}
	
	if(numMes == 3) {
		mes = 'março';
	}
	
	else {
		cout << "Mes invalido";
	}
	
	cout << "O numero " << numMes << " corresponde ao mes de " << mes;
}
