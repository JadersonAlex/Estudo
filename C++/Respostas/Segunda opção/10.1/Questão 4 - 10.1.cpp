#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int soma;
	int index;
	int inteiro;
	
	
	index = 1;
	soma = 0;
	
	while(index<101){
		cout << index << " + " << endl;
		soma = soma + index;
		index = index+1;
		cout << "A soma dos inteiros de 1 � 100 �: " << soma << endl;
	}
	
	

	return 0;
}
	
