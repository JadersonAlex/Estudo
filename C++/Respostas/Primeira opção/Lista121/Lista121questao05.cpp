#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a[5];
	double b[5];
	
	for(int i=0;i<5;i++){
		cout << "Informe um número:";
		cin >> a[i];
		b[i] = pow(a[i],2);
	}
	for(int i=0;i<5;i++){
		cout << "a[" << i << "]=" << a[i] <<
		 " - b[" << i << "]=" << b[i] << endl;
	}
	
	return 0;
}
