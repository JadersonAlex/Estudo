#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale (LC_ALL,"Portuguese");
	double base; 
	double altura;
	double perimetro;
	double area;
	double diagonal;
	
	cout << "base:";
	cin >> base;
	
	cout << "altura:";
	cin >> altura;
	

		
	perimetro = 2*base + 2*altura;
	
	area = base*altura;
	
	diagonal = sqrt(pow(base,2) + pow(altura,2));
	
	cout << "perímetro:" <<perimetro<<endl;
	cout<< "Área:" <<area<<endl;
	cout<< "Diagonal:" <<diagonal<<endl;








	
	
	return 0;
}
