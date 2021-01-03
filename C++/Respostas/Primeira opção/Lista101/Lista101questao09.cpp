#include <iostream>
using namespace std;

int main(){
	int i=0;
	int soma=0;
	while(i<=500){
		soma = soma+i;//soma acumula a soma dos valores pares
		cout << (soma-i) << " + " << i << " = " << soma << endl;
		i=i+2;
	}
	
	
	return 0;
}
