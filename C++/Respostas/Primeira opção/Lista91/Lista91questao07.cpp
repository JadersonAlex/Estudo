#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if(n<0){
		n = n * -1;
	}
	
	cout << n << endl;
	
	return 0;
}
