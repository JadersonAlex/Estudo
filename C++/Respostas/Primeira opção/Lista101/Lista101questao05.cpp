#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	while(i<=10){
		cout << n << " . " << i << " = " << (n*i) << endl;
		i = i + 1;
	}
	
	return 0;
}
