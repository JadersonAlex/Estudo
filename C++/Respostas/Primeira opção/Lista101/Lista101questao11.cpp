#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int pot = 1;
	int b;
	int e;
	
	cout << "Informe a base:";
	cin >> b;
	cout << "Informe o expoente:";
	cin >> e;
	
	while(i<=e){
		pot = pot * b;
		i++;
	}
	
	cout << b << " elevado a " << e << " = " << pot << endl;
	
	return 0;
}
