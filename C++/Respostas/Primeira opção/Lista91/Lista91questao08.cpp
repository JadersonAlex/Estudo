#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if((n>=1) && (n<=10)){
		cout << "Est� na faixa.";
	}else{
		cout << "N�o est� na faixa.";
	}
	
	return 0;
}
