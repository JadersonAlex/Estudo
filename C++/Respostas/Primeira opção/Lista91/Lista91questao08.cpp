#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if((n>=1) && (n<=10)){
		cout << "Está na faixa.";
	}else{
		cout << "Não está na faixa.";
	}
	
	return 0;
}
