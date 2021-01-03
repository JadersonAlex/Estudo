#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout << " _____________________" << endl;
	cout << "| Código  |  Opção    |" << endl;
	cout << "|_________|___________|" << endl;
	cout << "|  1      | Incluir   |" << endl;
	cout << "|  2      | Alterar   |" << endl;
	cout << "|  3      | Excluir   |" << endl;
	cout << "|  4      | Pesquisar |" << endl;
 	cout << "|  5      | Sair      |" << endl;
 	cout << "|_________|___________|" << endl;
 	
	int opcao;
 	cout << "Opção:";
 	cin >> opcao;
 	
 	switch(opcao){
 		case 1:
 			cout << "Escolheu a opção INCLUIR" << endl;
 		    break;
 		case 2:
 			cout << "Escolheu a opção ALTERAR" << endl;
 		    break;
 		case 3:
 			cout << "Escolheu a opção EXCLUIR" << endl;
 		    break;
 		case 4:
 			cout << "Escolheu a opção PESQUISAR" << endl;
 		    break;
 		case 5:
 			cout << "Escolheu a opção SAIR" << endl;
 		    break;
 		default:
 			cout << "Opção inválida" << endl;
 		    break;
	 }
 		
	return 0;
}
