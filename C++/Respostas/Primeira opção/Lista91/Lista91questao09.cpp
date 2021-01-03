#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	cout << "Informe n:";
	cin >> n;
	
	if(n>0){
		cout << "Positivo." << endl;
	}else{
		if(n<0){
			cout << "Negativo." << endl;
		}else{
			cout << "Nulo." << endl;
		}
	}
	
	return 0;
}
