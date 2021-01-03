#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	do{
		cout << i << " 2 elevado a " << i << " = "<< pow(2,i) << endl;
		i++;
	}while(i<=10);
	
	return 0;
}
