#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int num = 0;
	
	cout << "Digite o um n�mero: ";
	cin >> num;
	
	while(num != -1) {
		if(num % 2 == 0) {
			cout << "O n�mero digitado � par\n";
		}
		
		else {
			cout << "O n�mero digitado � �mpar\n";
		}
		cout << "Digite um n�mero: " << "\n";
		cin >> num;
	}
}
