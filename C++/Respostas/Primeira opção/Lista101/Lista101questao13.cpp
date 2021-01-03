#include <iostream>
using namespace std;

int main(){
	int i=3;
	while(i<=6){
		cout << "Tabuada do " << i << ":" << endl;
		int j=0;
		while(j<=10){
			cout << i << " x " << j << " = " << (i*j) << endl;	
			j++;
		}
		i++;
		cout << endl;
	}
	
	return 0;
}
