#include <iostream>
using namespace std;

int main(){
	double num1;
	double num2;
	double num3;
	double num4;
	double mediaAritmeticaPonderada;
	
	cout << "Informe num1:";
	cin >> num1;
	cout << "Informe num2:";
	cin >> num2;
	cout << "Informe num3:";
	cin >> num3;
	cout << "Informe num4:";
	cin >> num4;	

	mediaAritmeticaPonderada = (num1*1+num2*2+num3*3+num4*4)/(1+2+3+4);
	
	cout << "Média aritmética ponderada: " << mediaAritmeticaPonderada << endl;

	return 0;
}
