#include <iostream>
#include <locale>
using namespace std;
int main (){
	setlocale (LC_ALL,"Portuguese");
	double n1;
	double n2;
	double n3;
	double n4;
	double p1;
	double p2;
	double p3;
	double p4;
	double mp;
	
	cout << "Informe o 1:";
	cin >> p1;
	cout << "Infrme o 2:";
	cin >> p2;
	cout << "Informe o 3:";
	cin >> p3;
	cout << "Informe o 4:";
	cin >> p4;
	
	p1=1;
	p2=2;
	p3=3;
	p4=4;
	
    mp = ( (n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4) ) / (p1 + p2 + p3 + p4);
    
    cout << "Média:" << mp;
	
	
	
	return 0;
}
