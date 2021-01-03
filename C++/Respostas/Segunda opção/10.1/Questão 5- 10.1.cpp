#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i = 1;
    int n;

    cout << "Informe n1: ";
    cin >> n;
  
 while(i<=10){
	cout << n << " . " << i << " = " << (n*i) << endl;
	i = i+1;
}
 




	
	
 return 0;	
}
