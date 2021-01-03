#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double n;
	double q;
	double r;
	
	cout << "Informe um número:";
	cin >> n;
	
	q = pow(n,2);
	r = sqrt(n);
	
	cout << "Número informado: " << n;
	cout << "\nQuadrado: " << q << "\nRaiz: " << r << endl;
	
	
	
	
	return 0;
}
