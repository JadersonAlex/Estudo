#include <iostream>
using namespace std;

int main(){
	double salario;
	double aumento;
	cout.precision(2);
	cout << "Informe o salario:";
	cin >> salario;
	aumento = salario * 1.15;
	cout << "Salario com aumento: " << fixed << aumento;
	return 0;
}
