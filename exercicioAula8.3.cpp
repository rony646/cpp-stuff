#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int cont, linhas;
	char star = '*';
	cout << "Qual a quantidade de linhas do triangulo? ";
	cin >> linhas;
	for(cont=1; cont <= linhas; cont ++) {
		cout << string(cont, star) << "\n";
	}

}
