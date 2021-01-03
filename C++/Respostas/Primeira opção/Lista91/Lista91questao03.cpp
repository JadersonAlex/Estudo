#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	
	cout << "Informe um número:";
	cin >> numero;
	
	if(numero%2==0){
		cout << "Par" << endl;
	}else{
		cout << "Ímpar" << endl;
	}
	
	
	return 0;
}
