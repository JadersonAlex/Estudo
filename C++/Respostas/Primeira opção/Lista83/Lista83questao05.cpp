#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double raio;
	double altura;
	double volume;
	const double PI = 3.14159265;
	
	cout << "Informe o raio: ";
	cin >> raio;
	cout << "Informe a altura:";
	cin >> altura;
	
	volume = PI * pow(raio,2) * altura;
	
	cout << "Volume: " << volume << endl;
	
	return 0;
}
