#include <iostream>
using namespace std;

int main(){
	double pesoKg;
	double alturaM;
	double pesoGr;
	double alturaCm;
	
	cout << "Informe o peso em Kg: ";
	cin >> pesoKg;
	cout << "Informe a altura em M: ";
	cin >> alturaM;
	
	pesoGr = pesoKg*1000;
	alturaCm = alturaM*100;
	
	cout << "Peso em Gr: " << pesoGr << endl;
	cout << "Altura em Cm: " << alturaCm << endl;
	return 0;
}
