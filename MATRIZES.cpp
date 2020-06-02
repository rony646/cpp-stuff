#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	int lin, col, num;
	int Mat_Num[3][5];
	
	for(lin=0; lin <= 2; lin++) {
		cout << "Numeros da " << lin + 1<< "º linha" << "\n";
		
		for(col=0; col <=4; col++) {
			cout << "Insira o " << col + 1 << "º elemento da " << lin + 1 << "º coluna: ";
			cin >> Mat_Num[lin][col];
		}
	}
	
	
}
