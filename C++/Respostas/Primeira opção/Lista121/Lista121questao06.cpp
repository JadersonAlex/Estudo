#include <iostream>
using namespace std;

int main(){
	int a[20];
	int b[20];
	/*
	int j=19;
	for(int i=0;i<20;i++){
		cout << "Informe um número:";
		cin >> a[i];
		b[j] = a[i];
		j--;
	}
	
	for(int i=0;i<20;i++){
		cout << "Informe um número:";
		cin >> a[i];
		b[19-i] = a[i];
	}
	*/
	for(int i=0,j=19;i<20;i++,j--){
		cout << "Informe um número:";
		cin >> a[i];
		b[j] = a[i];
	}
	
	
	for(int i=0;i<20;i++){
		cout << a[i] << "\t" << b[i] << endl;
	}
	
}
