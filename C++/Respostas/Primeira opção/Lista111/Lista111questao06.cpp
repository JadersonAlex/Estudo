#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1;
	double n2;
	char codigo;
	
	cout << " ______________________________________________________" << endl;
	cout << "| Código  |  Operação                                  |" << endl;
	cout << "|_________|____________________________________________|" << endl;
	cout << "|  a      | Média aritmética entre os números digitados|" << endl;
	cout << "|  b      | Diferença do maior pelo menor              |" << endl;
	cout << "|  c      | Produto entre os números digitados         |" << endl;
	cout << "|  d      | Divisão do primeiro pelo segundo           |" << endl;
 	cout << "|_________|____________________________________________|" << endl;
	cout << "Código: ";
	cin >> codigo;
	cout << "N1: ";
	cin >> n1;
	cout << "N2: ";
	cin >> n2;
	
	switch(codigo){
		case 'a':
			cout << "Média: " << (n1+n2)/2 << endl;
			break;
		case 'b':
			if(n1>n2){
				cout << "Diferença:" << (n1-n2) << endl;
			}else{
				cout << "Diferença:" << (n2-n1) << endl;
			}
			break;
		case 'c':
			cout << "Produto: " << (n1*n2) << endl;
			break;
		case 'd':
			cout << "Divisão: " << (n1/n2) << endl;
			break;
		default:
			cout << "Código inválido.";
			break;
	}
	return 0;
}
