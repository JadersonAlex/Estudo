#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if((n%4==0)&&(n%5==0)){
		cout << "Valor de n: " << n << endl;
	}else{
		cout << "Valor não é divisível por 4 e 5" << endl;
	}
	
	return 0;
}
