#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int idade;
	cout << "Insira sua idade: ";
	cin >> idade;
	if(idade >= 16) {
		cout << "Parab�ns voc� j� est� apto a votar!";
	} else {
		cout << "Voc� ainda n�o tem idade para votar";
	}
}
