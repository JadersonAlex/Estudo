#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	string sexo;
	
	cout << "Informe seu nome:";
	getline(cin,nome);
	//cin >> nome;
	cout << "Informe seu sexo:";
	getline(cin,sexo);
	//cin >> sexo;
	cout << "Seu nome �: " << nome << endl;
	cout << "\nSeu sexo �: " << sexo;
	
	return 0;
}
