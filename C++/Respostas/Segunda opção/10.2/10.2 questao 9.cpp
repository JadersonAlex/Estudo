#include <iostream>
using namespace std;

int main(){
	
	int primeiro = 1;
	int segundo = 1;
	int terceiro;
	int i = 1;
	
	do{
	   cout << primeiro << " ";
	   terceiro = primeiro+segundo;
	   primeiro=segundo;
	   segundo=terceiro;
		i++;
	}while(i<=15);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
