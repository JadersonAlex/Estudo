#include <iostream>
using namespace std;

int main(){
	int n1;
	int n2;
	
	cout << "Informe n1:";
	cin >> n1;
	cout << "informe n2:";
	cin >> n2;
	
	if(n1>n2){
		cout << (n1-n2) << endl;
	}else{
		if(n1<n2){
			cout << (n2-n1) << endl;	
		}else{
			cout << "São iguais" << endl;
		}
	}
	
	
	return 0;
}
