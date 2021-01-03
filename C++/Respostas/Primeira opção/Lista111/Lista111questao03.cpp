#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	cout << "Informe n:";
	cin >> n;
	
	switch(n%2){
		case 0:
			cout << "Par" << endl;
			break;
		case 1:
			cout << "Ímpar" << endl;
			break;
	}
	
	return 0;
}
