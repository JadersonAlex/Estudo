#include <iostream>
#include <locale>

using namespace std;

int main(){
	double soma = 0;
	double media;
	double contador = 0;
	double n;
	double maior;
	double menor;
	
	cout << "Informe n: ";
	cin >> n;
	
	maior = n;
	menor = n; 
	
    while(n != -1){
	if(maior<n){
		maior = n; 
		
	}
	if(menor>n){
		menor= n;
			
	}
	soma = soma + n;
	contador++;
	
	cout << "Informe n: ";
	cin >> n;
	
}	
	media = soma/contador;
	
	cout << "Media: " << media << endl;
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	
	
	
	
	
return 0;
	}
