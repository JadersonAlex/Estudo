#include <iostream>


using namespace std;

int main(){
	
	
	int i = 3;
    
    while(i<=6){
	cout << "Tabuado do " << i <<  " : " << endl;
    int j=0;
      while(j<=10){
      	cout << i << " x " << j << " = " << (i*j) << endl;
      	j++;
      }    
        i++;
}
return  0;	
}
