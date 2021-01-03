#include <iostream>

using namespace std;

int main(){
	
	int soma = 0;
	int i = 0;
	
	while(i<=500){
		soma = soma+i; // soma acumulada a soma dos valores pares
		cout << (soma-i) << " + " << i << " = " << soma << endl;
    i=i+2;	
	}
	

return 0;

}
