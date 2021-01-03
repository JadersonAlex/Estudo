#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1;
	double n2;
	double n3;
	double media;
	
	cout << "Informe n1: ";
	cin >> n1;
	cout << "Informe n2: ";
	cin >> n2;
	cout << "Informe n3: ";
	cin >> n3;
	
	media = (n1+n2+n3)/3;
	
	cout.precision(2);
	cout << "Média: " << fixed << media << endl;
	
	return 0;
}
