#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");
	
	int matrix[3][4];
	int col, lin;
	int qtMult5 = 0;
	
	for(lin=0; lin <= 2; lin ++) {
		cout << lin + 1<< "� LINHA" << "\n";
		
		for(col=0; col <=3; col++) {
			cout << "Insira o " << col + 1 << "� elemento da " << lin + 1 << "� linha: ";
			cin >> matrix[lin][col];	
		}
	}
	
	for(lin=0; lin <=2; lin ++) {
		for(col=0; col <=3; col++) {
			if(matrix[lin][col] % 5 == 0) {
				qtMult5 ++;
			}
		}
	}
	
	cout << "\nH� nessa matriz " << qtMult5 << " m�ltiplos de 5";
}
