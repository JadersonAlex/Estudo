#include <iostream>
#include <locale> 

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	 double n;
	 
	 cout << "Informe um número:";
	 cin >> n;
	 
	 
	 	if(n>20){
	 		n = n/2;
	 		
	 	} 
	
	cout << "N:" << n << endl;
	
	
	
	return 0;
}
