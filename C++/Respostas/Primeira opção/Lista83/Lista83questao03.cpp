#include <iostream>
using namespace std;

int main(){
	double n1;
	double n2;
	
	cout << "Informe n1:";
	cin >> n1;
	cout << "Informe n2:";
	cin >> n2;
	
	cout << "Acréscimo de 30%: " << (n1*1.3) << endl;
	cout << "Desconto de 25%: " << (n2*0.75) << endl;
	
	return 0;
}
