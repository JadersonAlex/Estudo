#include <iostream>
using namespace std;

int main(){
	int a[5];
	int soma = 0;
	
	for(int i=0;i<5;i++){
		cout << "Informe um número:";
		cin >> a[i];
		soma = soma + a[i];
	}
	
	cout << "Soma: " << soma << endl;
	
	
	
	return 0;
}
