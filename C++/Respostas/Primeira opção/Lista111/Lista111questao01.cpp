#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout << " _____________________" << endl;
	cout << "| C�digo  |  Op��o    |" << endl;
	cout << "|_________|___________|" << endl;
	cout << "|  1      | Incluir   |" << endl;
	cout << "|  2      | Alterar   |" << endl;
	cout << "|  3      | Excluir   |" << endl;
	cout << "|  4      | Pesquisar |" << endl;
 	cout << "|  5      | Sair      |" << endl;
 	cout << "|_________|___________|" << endl;
 	
	int opcao;
 	cout << "Op��o:";
 	cin >> opcao;
 	
 	switch(opcao){
 		case 1:
 			cout << "Escolheu a op��o INCLUIR" << endl;
 		    break;
 		case 2:
 			cout << "Escolheu a op��o ALTERAR" << endl;
 		    break;
 		case 3:
 			cout << "Escolheu a op��o EXCLUIR" << endl;
 		    break;
 		case 4:
 			cout << "Escolheu a op��o PESQUISAR" << endl;
 		    break;
 		case 5:
 			cout << "Escolheu a op��o SAIR" << endl;
 		    break;
 		default:
 			cout << "Op��o inv�lida" << endl;
 		    break;
	 }
 		
	return 0;
}
