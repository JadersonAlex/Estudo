#include <iostream>
using namespace std;

int main(){
	int i = 100;
	do{
		if(i%2==0){
			cout << i << endl;
		}
		i++;
	}while(i<=200);
	
	return 0;
}
