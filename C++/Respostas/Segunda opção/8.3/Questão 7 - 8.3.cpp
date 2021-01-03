#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	double lado1;
	double lado2;
	double hipotenusa;
	
	
	cout << "lado A:";
	cin >> lado1;
	
	cout << "lado B:";
	cin >> lado2;
	
	hipotenusa = sqrt (pow(lado1,2) + pow(lado2,2)) ;
	cout << "valor" << hipotenusa << endl;
	
	
	
	return 0;
}
