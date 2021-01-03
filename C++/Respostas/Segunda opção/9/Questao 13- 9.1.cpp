#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	int a;
	int b;
	int c;
	int aux;
	
	
	cout << "Informe a:";
	cin >> a;
	
	cout << "Informe b:";
	cin >> b;
	
	cout << "Informe c:";
	cin >> c;
	
	
	
	
     if(a>b){
	aux = a;
	a = b;
	b = aux;
}
	if(a>c){
		aux = a;
		a = c;
		c = aux;
	}
	if(b>c){
		aux = b;
		b = c;
		c =aux;
	}
	
	cout << a << " - " << b << " - " << c;

   return 0;
}
