#include <iostream>
#include <locale> 

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int n;
	int resposta;
	
	cout << "Informe um n�mero:";
	cin >> n;
	
	if(n%2){
		n = 0;
		cout << "Par" << n << endl;
		
	}else{
		n = 1;
	cout  << "�mpar" << n << endl;
	}
	
	//* o � Par  e  1 � impar
	//
	
	
	
	
	
	
	return 0;
}
