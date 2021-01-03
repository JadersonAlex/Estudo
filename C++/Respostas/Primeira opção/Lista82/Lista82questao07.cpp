#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double valor;
	int quantPrest;
	double valorPrest;
	
	cout << "Valor da compra: ";
	cin >> valor;
	cout << "Número de prestações: ";
	cin >> quantPrest;
	
	valorPrest = valor/quantPrest;
	
	cout << "Valor das prestações: " << valorPrest;
	
	return 0;
}
