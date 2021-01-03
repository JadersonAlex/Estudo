#include <iostream>
using namespace std;

int main(){
	double f;
	double c;
	
	cout << "Informe a temperatura em Fahrenheit:";
	cin >> f;
	
	c = (f-32)*5/9;
	
	cout << "Temperatura em Celcius: " << c;
	
	return 0;
}
