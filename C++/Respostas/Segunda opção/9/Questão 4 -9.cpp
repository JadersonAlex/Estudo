#include <iostream>
#include <locale> 

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	int n;
	
	
	cout << "Informe um n�mero:";
	cin >> n;
	
	
	if((n%4==0)&& (n%5==0)){
		cout << "Valor de n" << n << endl;
	}else{
		cout << "Valor n�o � divis�vel por 4 e 5" << endl;
	}
	
	
 	return 0;
}
