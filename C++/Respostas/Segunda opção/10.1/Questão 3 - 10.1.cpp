#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int  n = 15;   
	int n2;
	
	
	
	
	while((n>=15) && (n<=200)){
		
		n2 = n*n;
		
		cout << "O quadrado de " << n << " é: " << n2 << endl;
		
		n = n+1;
	}
	
	
	
	
	return 0;
}







