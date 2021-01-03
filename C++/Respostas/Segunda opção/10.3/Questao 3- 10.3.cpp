#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	int i = 1;
	
	cout << "Infome uma tabuada de 1 á 10 : " ;
	cin >> n;
	
	
	for(int i=0;i<=10;){
		
	
		cout << n << " . " << i << " = " << (n*i) << endl;
	
	i = i+1;
		
		
	
	}
 	
	

	
	
	
	
return 0;	
}
