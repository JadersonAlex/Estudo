#include <iostream>

using namespace std;

int main(){
	
	
	string nome;
	string sexo;
	int idade;
	
	for(int i=0;i<3;i++){
		cout << "Informe um nome : ";
		getline(cin,nome);
		cout << "Informe um sexo : ";
		getline(cin,sexo);
		cout << "Informe uma idade : ";
		cin >> idade;  
		
		if((sexo=="m")&& (idade>=21)){
			cout << "Nome: " << nome << endl;
		}
		cin.ignore();
	}
	
	
	
	
	return 0;
}
