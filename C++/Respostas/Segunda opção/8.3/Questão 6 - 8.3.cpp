#include <iostream>
#include <locale>
using namespace std;

int main (){
	setlocale (LC_ALL,"Portuguese");
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
	
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	
	
	return 0;
}
