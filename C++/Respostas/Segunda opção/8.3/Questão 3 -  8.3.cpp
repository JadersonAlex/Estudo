#include <iostream>
#include <locale>
using namespace std;
int main (){
	setlocale (LC_ALL,"Portuguese");
	double n1;
	double n2;
	
	cout << "Informe o n1:";
	cin >> n1;
	
	cout << "Informe o n2:";
	cin >> n2;
	
	cout << "Acéscimo de 30%:" << (n1*1.3) << endl;
	cout << "Desconto de 25%:" << (n2*0.75) << endl;

	
	
	return 0;
}
