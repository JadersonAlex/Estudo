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
	cout << "N�mero de presta��es: ";
	cin >> quantPrest;
	
	valorPrest = valor/quantPrest;
	
	cout << "Valor das presta��es: " << valorPrest;
	
	return 0;
}
