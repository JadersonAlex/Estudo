#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int num;
	int centena;
	
	
	cout << "Informe num:";
	cin >> num;
	
	
    if((num>=100) && (num<=999)){
		centena = num/100;
		cout << centena << endl;
	}else{
		cout << "O n�mero informado n�o possu� 3 casas de n�meros decimais"  << endl;
	}
	
	
	
	
	
	
	
	return 0;
}




