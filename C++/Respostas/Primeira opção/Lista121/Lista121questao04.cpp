#include <iostream>
using namespace std;

int main(){
	int a[8];
	int b[8];
	
	for(int i=0;i<8;i++){
		cout << "Informe um número:";
		cin >> a[i];
		b[i] = a[i] * 3;
	}
	for(int i=0;i<8;i++){
		cout << a[i] << " x 3 = "<< b[i] << endl;
	}
	
	
	return 0;
}
