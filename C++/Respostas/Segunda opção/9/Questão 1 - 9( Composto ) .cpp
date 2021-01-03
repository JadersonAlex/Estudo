#include <iostream>
#include <locale> 

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	double n;
	cout << "Informe um número:";
	cin >> n;
	
	if(n>20){
		cout << "N:" << (n/2) << endl;
	}else{
		cout << "N:" << n << endl;
	}
	
	return 0;
}
