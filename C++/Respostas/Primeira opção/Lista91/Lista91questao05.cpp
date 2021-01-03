#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1;
	double n2;
	double n3;
	double n4;
	double media;
	
	cout << "Informe n1:";
	cin >> n1;
	cout << "Informe n2:";
	cin >> n2;
	cout << "Informe n3:";
	cin >> n3;
	cout << "Informe n4:";
	cin >> n4;
	
	media = (n1+n2+n3+n4)/4;
	
	if(media>=5){
		cout << "Aprovado." << endl;
	}else{
		cout << "Reprovado." << endl;
	}
	
	cout << "Média: " << media << endl;
		
	return 0;
}
