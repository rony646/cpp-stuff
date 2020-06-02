#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num;
	cout << "\n\nDigite um número: ";
	cin >> num;
	if(num % 2 == 0) {
		cout << "\nO número " << num << " é multiplo de 2";
	} else {
		cout << "\nO número " << num << " não é multilpo de 2";
	}
	
	return main();
}
