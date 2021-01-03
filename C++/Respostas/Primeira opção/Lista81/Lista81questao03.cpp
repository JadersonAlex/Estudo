#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double dolar;
	double real;
	
	cout << "Informe um valor em dólar:";
	cin >> dolar;
	
	real = dolar * 4.16;
	
	cout << "Valor em Real: R$ " << real;
	
	return 0;
}
