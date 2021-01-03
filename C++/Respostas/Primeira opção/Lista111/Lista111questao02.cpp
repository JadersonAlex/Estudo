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
			cout << "Banheiro masculino à direita" << endl;
			break;
		case 'f':
		case 'F':
			cout << "Banheiro feminino à esquerda" << endl;
			break;
		default:
			cout << "Sexo inválido" << endl;
			break;
	}
	return 0;
}
