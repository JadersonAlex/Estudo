#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout << "Informe a:";
	cin >> a;
	cout << "Informe b:";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	
	return 0;
}
