#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	cout << "Informe seu sexo:";
	cin >> sexo;
	
	switch(sexo){
		case 'm':
		case 'M':
			cout << "Banheiro masculino � direita" << endl;
			break;
		case 'f':
		case 'F':
			cout << "Banheiro feminino � esquerda" << endl;
			break;
		default:
			cout << "Sexo inv�lido" << endl;
			break;
	}
	return 0;
}
