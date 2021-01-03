#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if(n<=50){
		while(n<250){
			cout << n << endl;
			n = n*3;
		}
		cout << n << endl;
	}else{
		cout << "O número informado é maior que 50." << endl;
	}
	
	return 0;
}
