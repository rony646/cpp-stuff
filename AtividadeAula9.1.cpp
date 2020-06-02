#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int num[10], tentativas, i, op;
	bool acertou = false;
	
	cout << "------------ RODADA DO 1� JOGADOR ------------" << "\n";
	
	for(i=0; i <= 9; i++) {
		cout << "Preencha a " << i + 1 << " � posi��o do vetor: " << "\n";
		cin >> num[i];
	}
	
	cout << "------------ RODADA DO 2� JOGADOR ------------" << "\n";
	
	while(tentativas != 3) {
		cout << "Tente advinhar um elemento do vetor: ";
		cin >> op;
		tentativas ++;
		for(i=0; i <= 9; i++) {
			if(num[i] == op) {
				cout << "Parab�ns voc� acertou o n�mero " << num[i] << " est� na posi��o " << i << " do vetor!" << "\n";
				acertou = true;
			}
		}
	}
	
	if(acertou == false) {
		cout << "Infelizmente voc� n�o teve acertos!";
	}
}
