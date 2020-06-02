#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "Digite um número: ";
	cin >> num;
	if(num > 0) {
		cout << "O número é positivo";
	}
	
	else if(num < 0) {
		cout << "O número é negativo";
	}
	
	else {
		cout << "O número é nulo!";
	}
}

