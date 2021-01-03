#include <iostream>
using namespace std;

int main(){
	string nome[5];
	string profissao[5];
	
	for(int i=0;i<5;i++){
		cout << "Nome da pessoa " << i << ":" << endl;
		getline(cin,nome[i]);
		cout << "Profissão da pessoa " << i << ":" << endl;
		getline(cin,profissao[i]);
	}
	
	cout << "---Relatório:---" << endl;
	
	for(int i=0;i<5;i++){
		cout << "Pessoa " << i << ": "<< "Nome: " << nome[i] << " - Profissão: " << profissao[i] << endl;
	}
	
	
	
	return 0;
}
