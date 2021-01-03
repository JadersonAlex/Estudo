#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1;
	double n2;
	char codigo;
	
	cout << " ______________________________________________________" << endl;
	cout << "| C�digo  |  Opera��o                                  |" << endl;
	cout << "|_________|____________________________________________|" << endl;
	cout << "|  a      | M�dia aritm�tica entre os n�meros digitados|" << endl;
	cout << "|  b      | Diferen�a do maior pelo menor              |" << endl;
	cout << "|  c      | Produto entre os n�meros digitados         |" << endl;
	cout << "|  d      | Divis�o do primeiro pelo segundo           |" << endl;
 	cout << "|_________|____________________________________________|" << endl;
	cout << "C�digo: ";
	cin >> codigo;
	cout << "N1: ";
	cin >> n1;
	cout << "N2: ";
	cin >> n2;
	
	switch(codigo){
		case 'a':
			cout << "M�dia: " << (n1+n2)/2 << endl;
			break;
		case 'b':
			if(n1>n2){
				cout << "Diferen�a:" << (n1-n2) << endl;
			}else{
				cout << "Diferen�a:" << (n2-n1) << endl;
			}
			break;
		case 'c':
			cout << "Produto: " << (n1*n2) << endl;
			break;
		case 'd':
			cout << "Divis�o: " << (n1/n2) << endl;
			break;
		default:
			cout << "C�digo inv�lido.";
			break;
	}
	return 0;
}
