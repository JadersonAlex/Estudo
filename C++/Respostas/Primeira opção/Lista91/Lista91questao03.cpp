#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	
	cout << "Informe um n�mero:";
	cin >> numero;
	
	if(numero%2==0){
		cout << "Par" << endl;
	}else{
		cout << "�mpar" << endl;
	}
	
	
	return 0;
}
