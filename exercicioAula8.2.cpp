#include <iostream>
#include <locale>

using namespace std;

// Enunciado: Receba 5 números reais e, ao final, informe o maior número da sequência.

int main() {
	setlocale(LC_ALL, "ptb");
	
	int cont;
	float num, maior;
	
	for(cont = 1; cont <= 5; cont++) {
		cout << "Digite o " << cont << "º número: " << "\n";
		cin >> num;
		if(num >= maior) {
			maior = num;
		}
	}
	
	cout << "O maior número digitado foi " << maior;
}

