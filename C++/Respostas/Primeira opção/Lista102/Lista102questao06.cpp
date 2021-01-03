#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i = 2;
	do{
		cout << i << "² = " << pow(i,2) << endl;
		i++;
	}while(i<=50);
	
	return 0;
}
