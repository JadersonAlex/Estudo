#include <iostream>
using namespace std;

int main(){
	int n;
	int centena;
	
	cout << "Informe n:";
	cin >> n;
	
	if((n>=100) && (n<=999)){
		centena = n/100;
		cout << centena << endl;
	}else{
		cout << "O número informado não possui 3 casas decimais." << endl;
	}
	
	return 0;
}
