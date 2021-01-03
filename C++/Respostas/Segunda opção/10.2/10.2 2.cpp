#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int soma = 0;
	
	do{
		soma = soma + i;
		i = i+2; 
	}while(i<=500);
	
	cout << "Soma: " << soma << endl;
	
	return 0;
}
