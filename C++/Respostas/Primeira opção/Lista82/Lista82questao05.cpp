#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1;
	double n2;
	
	cout << "Informe n1: ";
	cin >> n1;
	cout << "Informe n2: ";
	cin >> n2;
	
	cout << "Soma: " << (n1+n2) << endl;
	cout << "Subtra��o 1: " << (n1-n2) << endl;
	cout << "Subtra��o 2: " << (n2-n1) << endl;
	cout << "Multiplica��o: " << (n1*n2) << endl;
	cout << "Divis�o: " << (n1/n2) << endl;
	cout << "Resto: " << ((int)n1%(int)n2) << endl;
	
	return 0;
}
