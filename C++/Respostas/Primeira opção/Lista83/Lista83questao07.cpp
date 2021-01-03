#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double cateto1;
	double cateto2;
	double hipotenusa;
	
	cout << "Informe o cateto 1: ";
	cin >> cateto1;
	cout << "Informe o cateto 2: ";
	cin >> cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout << "Hipotenusa: " << hipotenusa << endl;	
	
	return 0;
}




