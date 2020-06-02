#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int num, res, cont;
	cout << "De qual número vc deseja ver a tabuada: ";
	cin >> num;
	for(cont=1; cont <= 10; cont++) {
		res = num * cont;
		cout << num << " * " << cont << " = " << res << "\n";
	}
}

