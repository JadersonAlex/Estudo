#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int divisor;
	int dividendo;
	int resto;
	
	cout << "Informe o divisor:";
	cin >> divisor;
	cout << "Informe o dividendo:";
	cin >> dividendo;
	
	resto = dividendo%divisor;
	
	if(resto == 0){
		cout << divisor << " � divisor de " << dividendo << endl;
	}else{
		cout << divisor << " n�o � divisor de " << dividendo << endl;
	}
	return 0;
}
