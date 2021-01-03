#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL,"Portuguese");
	
	double numero;
	double razao;
	double termo;
	double termo1;
	
	cout << "Numero: ";
	cin >> numero;
	
	cout << "razao: ";
	cin >> razao;
	
	cout << "termo: ";
	cin >> termo1;
	
	cout << "termo: ";
	termo = numero+(termo1-1)*razao;
	cout << termo;
	
	
	
	
	
	/* Formula matemática = A1+(n-1)*R 
	numero= a1
	n= termo
	r= razão
	termo1= termo pedido
         	
	*/
	
	
	  
	  
	
	
	return 0;
}


