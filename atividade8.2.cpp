#include <iostream>
#include <locale>

using namespace std;

// Enunciado: Receba uma sequ�ncia de 10 n�meros inteiros e, ao final, exiba a quantidade de m�ltiplos de 3 que foi informada.;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int qtMult, cont, num;
	
	for(cont=1; cont <= 10; cont ++) {
		cout << "Digite o " << cont << "� n�mero: " << "\n"; 
		cin >> num;
		if(num % 3 == 0) {
			qtMult ++;
		}
	}
	
	cout << "Foram digitados " << qtMult << " n�meros m�ltiplos de 3";
}
