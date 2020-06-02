 #include <iostream>
 #include <locale>
 
 using namespace std;
 
 int main() {
 	setlocale(LC_ALL, "ptb");
 	int num, res;
 	int contador = 1;
 	
 	cout << "Qual número você deseja ver a tabuada: ";
 	cin >> num;
 	
 	while(contador <= 10) {
 		res = num * contador;
 		cout << num << " * " << contador << " = " << res << '\n';
 		contador++;
	 }
	 
	 cout << " \n";
	 main();
 }
