#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "Digite um n�mero: ";
	cin >> num;
	if(num > 0) {
		cout << "O n�mero � positivo";
	}
	
	else if(num < 0) {
		cout << "O n�mero � negativo";
	}
	
	else {
		cout << "O n�mero � nulo!";
	}
}

