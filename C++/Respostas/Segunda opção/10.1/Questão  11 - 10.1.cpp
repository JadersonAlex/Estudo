#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale (LC_ALL,"Portuguese");
	int i = 1;
	int pot = 1;
	int b;
	int e;
	
	
	cout << "Digite a base : ";
	cin >> b;
	
	cout << "Digite o expoente: ";
	cin >> e;
	
	while(i<=e)  {
		pot = pot * b;
		i++;
		
		
		
	}
	
	cout << b <<  " elevado a " <<  e << " = " << pot << endl;
	
	
		
	
	
	
	
	
	
	return 0;
}
