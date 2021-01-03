#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	double razao;
	double termo;
	double numero;
	
	cout << "numero: ";
	cin >> numero;
	
	cout << "razao: ";
	cin >>razao;
	
	cout << "termo: ";
	termo = numero*pow(razao,5-1);
	cout << termo;
		
	return 0;
}
