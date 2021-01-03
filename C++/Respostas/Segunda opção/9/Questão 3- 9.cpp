#include <iostream>
#include <locale> 

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int n;
	int resposta;
	
	cout << "Informe um número:";
	cin >> n;
	
	if(n%2){
		n = 0;
		cout << "Par" << n << endl;
		
	}else{
		n = 1;
	cout  << "Ímpar" << n << endl;
	}
	
	//* o é Par  e  1 é impar
	//
	
	
	
	
	
	
	return 0;
}
