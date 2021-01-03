#include <iostream>
using namespace std;

int main(){
	int pot = 1;
	int b;
	int e;
	
	cout << "Base: ";
	cin >> b;
	cout << "Expoente: ";
	cin >> e;
	
	for(int i=1;i<=e;i++){
		pot = pot * b;
	}
	cout << b << " elevado a " << e << "=" << pot << endl;
	
	return 0;	
}


