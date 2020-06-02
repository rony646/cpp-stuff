#include <iostream>

#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int dias, anos;
	cout <<"Digite a quantidade de dias: ";
	cin >> dias;
	anos = dias / 365;
	cout << "Essa pessoa já viveu " << anos  << " anos";
}
