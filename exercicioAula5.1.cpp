#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int idade;
	cout << "Insira sua idade: ";
	cin >> idade;
	if(idade >= 16) {
		cout << "Parabéns você já está apto a votar!";
	} else {
		cout << "Você ainda não tem idade para votar";
	}
}
