#include <iostream>
using namespace std;

int main(){
	double valor;
	double valorTotal1;
	double valorTotal2;
	
	cout << "Informe o valor da conta: ";
	cin >> valor;
	
	valorTotal1 = valor * 1.1;
	valorTotal2 = valor + valor*10/100;
	
	cout << "Valor total 1: " << valorTotal1;
	cout << "\nValor total 2: " << valorTotal2;
	
	return 0;
}
