#include <iostream>
using namespace std;

int main(){
	int i=1;
	int soma = 0;
	
	while(i<=100){
		soma = soma + i;
		cout << (soma-i) << " + " << i << " = " << soma << endl;
		i=i+1;
	}
	
	cout << "Soma: " << soma << endl;
	
	return 0;
}
