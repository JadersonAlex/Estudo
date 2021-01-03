#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int n1;
	
	
	cout << "Informe um número:";
	cin >> n1;
	
	if(n1<0){
	cout <<	(n1*-1) << endl;
	}else{
   cout << (n1) << endl; 
	
	}
	
	

	
	return 0;
}
