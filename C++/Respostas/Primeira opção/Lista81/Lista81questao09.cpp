#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double n;
	double q;
	double r;
	
	cout << "Informe um n�mero:";
	cin >> n;
	
	q = pow(n,2);
	r = sqrt(n);
	
	cout << "N�mero informado: " << n;
	cout << "\nQuadrado: " << q << "\nRaiz: " << r << endl;
	
	
	
	
	return 0;
}
