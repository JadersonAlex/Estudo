#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1;
	int n2;
	int n3;
	int n4;
	
	cout << "Informe n1:";
	cin >> n1;
	cout << "Informe n2:";
	cin >> n2;
	cout << "Informe n3:";
	cin >> n3;
	cout << "Informe n4:";
	cin >> n4;
	
	int soma;
	int mult;
	
	soma = n1+n2+n3+n4;
	mult = n1*n2*n3*n4;
	
	cout << "Soma: " << soma << endl;
	cout << "Multiplicação: " << mult << endl;
	
	
	
	return 0;
}
