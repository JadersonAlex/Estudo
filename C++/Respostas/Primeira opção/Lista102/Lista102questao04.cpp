#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int n;
	
	cout << "Informe um n�mero:";
	cin >> n;
	
	do{
		cout << n << " x " << i << " = " << (n*i) << endl;
		i++;
	}while(i<=10);
	
	return 0;
}
