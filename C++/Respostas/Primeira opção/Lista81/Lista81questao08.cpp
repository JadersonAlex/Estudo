#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double d;
	double c;
	double l;
	
	cout << "Informe a distância: ";
	cin >> d;
	cout << "Informe o consumo: ";
	cin >> c;
	
	l = d/c;
	
	cout << "Litros: " << l;
	
	return 0;
}
