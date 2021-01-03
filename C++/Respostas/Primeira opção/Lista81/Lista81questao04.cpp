#include <iostream>
using namespace std;

int main(){
	int numero;
	int antecessor;
	int sucessor;
	
	cout << "Informe um numero:";
	cin >> numero;
	
	antecessor = numero-1;
	sucessor = numero+1;
	
	cout << "Antecessor: " << antecessor << endl;
	cout << "Sucessor: " << sucessor << endl;
	
	return 0;
}
