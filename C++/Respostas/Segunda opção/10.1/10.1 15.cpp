#include <iostream>
using namespace std;

int main(){
	int primeiro = 1;
	int segundo = 1;
	int terceiro;
	int i = 1;
	
	while(i<=15){
		cout << primeiro << " ";
		terceiro = primeiro+segundo;
		primeiro = segundo;
		segundo = terceiro;
		i++;
	}
	
	return 0;
}
