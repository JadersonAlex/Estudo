#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double pc;
	double pv1;
	double pv2;
	double ac;
	
	cout << "Informe o preço de custo: ";
	cin >> pc;
	cout << "Informe o acréscimo: ";
	cin >> ac;
	
	pv1 = pc+(pc*ac/100);
	pv2 = pc*(1+ac/100);
	
	cout << "Preço de venda 1: " << pv1 << endl;
	cout << "Preço de venda 2: " << pv2 << endl;
	
	return 0;
}




