#include <iostream>
#include <locale>

using namespace std;
int main(){

	int num1;
	int num2;
	
	cout << "Num 1:";
	cin >> num1;
	
	cout << "Num 2:";
	cin >> num2;
	

	
	if(num1>num2) {
    cout << (num1-num2) << endl;
	}else{ 
	if (num1<num2){
		cout << (num2-num1) << endl;
	}else{
	cout << "São iguais" << endl;
	
	}
	
	
	}
	
	
	


	
	
	return 0;
}
