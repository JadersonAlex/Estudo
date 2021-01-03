#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double q;
	double a1;
	double a5;
	
	cout << "Razão: ";
	cin >> q;
	cout << "a1: ";
	cin >> a1;

	a5 = a1 * pow(q,4);
	
	cout << "a5: " << a5 << endl;	
	
	
	
	return 0;
}
