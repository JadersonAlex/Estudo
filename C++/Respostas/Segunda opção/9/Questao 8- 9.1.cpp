#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	int n1;
	
	cout << "Informe n1:";
	cin >> n1;
	
    if	((n1>=1) && (n1<=10)){
		cout << "O n�mero est� entre 1 e 10" << endl;
	
	}else{
		cout << "O n�mero n�o est� entre 1 e 10" << endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

	
