#include <iostream>
using namespace std;

int main(){
	
	double r;
	double a1;
	double an;
	double n;
	
	cout << "Informe a1: ";
	cin >> a1;
	cout << "Informe a razão: ";
	cin >> r;
	cout << "Informe n: ";
	cin >>n;
	
	an = a1+(n-1)*r;
	
	cout << "an: " << an << endl;
	
	return 0;
}
