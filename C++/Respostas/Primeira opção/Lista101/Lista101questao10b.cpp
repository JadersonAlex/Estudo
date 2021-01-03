#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int pot = 1;
	while(i<=15){
		cout << "3 elevado a " << i << " = " << pot << endl;
		pot = pot * 3;
		i++;
	}
		
	return 0;
}
