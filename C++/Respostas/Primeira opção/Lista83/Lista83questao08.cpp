#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double base;
	double altura;
	double perimetro;
	double area;
	double diagonal;
	
	cout << "Informe a base: ";
	cin >> base;
	cout << "Informe a altura: ";
	cin >> altura;
	
	perimetro = 2*base + 2*altura;
	area = base*altura;
	diagonal = sqrt(pow(base,2)+pow(altura,2));
	
	cout << "Perímetro: " << perimetro << endl;
	cout << "Área: " << area << endl;
	cout << "Diagonal: " << diagonal << endl;

	return 0;
}
