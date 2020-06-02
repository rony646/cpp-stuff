#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int idade;
	cout << "Digite a idade do competidor: \n";
	cin >> idade;
	
	while(idade != -1) {
		if(idade < 7) {
			cout << "O competidor est� fora da faixa et�ria permitida! \n";
			cout << "Digite a idade do competidor: \n";
			cin >> idade;
		}
		
		if(idade >= 7 && idade <= 12) {
			cout << "O competidor est� na faixa et�ria INFANTIL \n";
			cout << "Digite a idade do competidor: \n";
			cin >> idade;
		}
		
		if(idade >= 13 && idade <= 17) {
			cout << "O competidor est� na faixa et�ria JUVENIL \n";
			cout << "Digite a idade do competidor: \n";
			cin >> idade;
		}
		
		if(idade >= 18 && idade <= 49) {
			cout << "O competidor est� na faixa et�ria ADULTO \n";
			cout << "Digite a idade do competidor: \n";
			cin >> idade;
		}
		
		else {
			cout << "O competidor est� na faixa et�ria SENIOR \n";
			cout << "Digite a idade do competidor: \n";
			cin >> idade;
		}
	}
}
