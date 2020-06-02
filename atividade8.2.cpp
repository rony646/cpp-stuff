#include <iostream>
#include <locale>

using namespace std;

// Enunciado: Receba uma sequência de 10 números inteiros e, ao final, exiba a quantidade de múltiplos de 3 que foi informada.;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int qtMult, cont, num;
	
	for(cont=1; cont <= 10; cont ++) {
		cout << "Digite o " << cont << "º número: " << "\n"; 
		cin >> num;
		if(num % 3 == 0) {
			qtMult ++;
		}
	}
	
	cout << "Foram digitados " << qtMult << " números múltiplos de 3";
}
