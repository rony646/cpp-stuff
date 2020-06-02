#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	float valorPago, valorVenda;
	cout << "Insira o valor pago no produto: " << "R$";
	cin >> valorPago;
	valorVenda = valorPago + (valorPago * 0.2);
	cout << "O valor sugerido para venda é de R$" <<  valorVenda;
}
