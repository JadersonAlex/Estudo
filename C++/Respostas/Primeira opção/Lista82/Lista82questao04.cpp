#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double peso;
	double altura;
	double imc;
	
	cout << "Informe o peso:";
	cin >> peso;
	cout << "Informe a altura:";
	cin >> altura;
	
	imc = peso/pow(altura,2);
	
	cout << "IMC: " << imc;
	
	return 0;
}
