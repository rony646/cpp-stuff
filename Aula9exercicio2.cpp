#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int i, res, vit1=0, vit2=0;
	int p1[10];
	int p2[10];
	
	for(i=0; i <= 9; i++) {
		cout << "------ " << i + 1 << " ºRODADA ------" << "\n" << "\n";
		cout << "Digite sua opção jogador 1: ";
		cin >> p1[i];
		cout << "Digite sua opção jogador 2: ";
		cin >> p2[i];
		
		res = p1[i] + p2[i];
		
		if(res % 2 == 0) {
			cout << "O número " << res << " é par" << ", jogador 1 venceu!" << "\n";
			vit1 ++;
		}
		
		else {
			cout << "O número " << res << " é ímpar" << ", jogador 2 venceu!" << "\n";
			vit2 ++;
		}
	}
	
	cout << "\n" << "O jogador 1 venceu " << vit1 << " vezes";
	cout << "\n" << "O jogador 2 venceu " << vit2 << " vezes";
	
}
