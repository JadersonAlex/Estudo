#include <iostream>
using namespace std;

int main(){
	string nome[5];
	string profissao[5];
	
	for(int i=0;i<5;i++){
		cout << "Nome da pessoa " << i << ":" << endl;
		getline(cin,nome[i]);
		cout << "Profiss�o da pessoa " << i << ":" << endl;
		getline(cin,profissao[i]);
	}
	
	cout << "---Relat�rio:---" << endl;
	
	for(int i=0;i<5;i++){
		cout << "Pessoa " << i << ": "<< "Nome: " << nome[i] << " - Profiss�o: " << profissao[i] << endl;
	}
	
	
	
	return 0;
}
