#include <iostream>
#include <locale>

using namespace std;

// Enunciado: Receba 5 n�meros reais e, ao final, informe o maior n�mero da sequ�ncia.

int main() {
	setlocale(LC_ALL, "ptb");
	
	int cont;
	float num, maior;
	
	for(cont = 1; cont <= 5; cont++) {
		cout << "Digite o " << cont << "� n�mero: " << "\n";
		cin >> num;
		if(num >= maior) {
			maior = num;
		}
	}
	
	cout << "O maior n�mero digitado foi " << maior;
}

