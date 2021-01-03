#include <iostream>
using namespace std;

int main(){
	int anos;
	int meses;
	int dias;
	int totalDeDias;
	
	cout << "Anos vividos:";
	cin >> anos;
	cout << "Quantidade de meses:";
	cin >> meses;
	cout << "Quantidade de dias:";
	cin >> dias;
	
	totalDeDias = anos*365 + meses*30 + dias;
	
	cout << "Total de dias vividos: " << totalDeDias;
	
	return 0;
}
