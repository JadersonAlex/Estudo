#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int primeiro;
	int segundo;
	int terceiro;
	int i = 1;
	
	cout << "Informe o 1º termo:";
	cin >> primeiro;
	cout << "Informe o 2º termo:";
	cin >> segundo;
	
	do{
		cout << primeiro << " ";
		terceiro=primeiro+segundo;
		primeiro=segundo;
		segundo=terceiro;
		i++;
	}while(i<=15);
	
	return 0;
}
