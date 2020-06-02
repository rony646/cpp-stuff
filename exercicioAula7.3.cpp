#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int num = 0;
	
	cout << "Digite o um número: ";
	cin >> num;
	
	while(num != -1) {
		if(num % 2 == 0) {
			cout << "O número digitado é par\n";
		}
		
		else {
			cout << "O número digitado é ímpar\n";
		}
		cout << "Digite um número: " << "\n";
		cin >> num;
	}
}
