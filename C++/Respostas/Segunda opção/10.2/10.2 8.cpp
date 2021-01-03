#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1;
	int pot  = 1;
	int b;
	int e;
	
	cout << "Informe a base: ";
	cin >> b;
		cout << "Informe o expoente: ";
		cin >> e;
		if(e!=0){
		
		do{
			pot = pot * b;
			i++;
		}while(i<=e);
	}
		cout << b << "elevado a " << e << " = " << pot << endl;
		
		return 0;
	}
