#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "\n\nDigite um n�mero: ";
	cin >> num;
	if(num % 2 == 0) {
		cout << "\nO n�mero " << num << " � multiplo de 2";
	} else {
		cout << "\nO n�mero " << num << " n�o � multilpo de 2";
	}
	
	return main();
}
