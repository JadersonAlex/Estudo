#include <iostream>
using namespace std;

int main (){
	int i = 1;
	int soma = 0;
	
	do{
		soma = soma + i;
		i++;
	}while(i<=5);
	
	cout << "Soma: " << soma << endl;
	
	return 0;
}
