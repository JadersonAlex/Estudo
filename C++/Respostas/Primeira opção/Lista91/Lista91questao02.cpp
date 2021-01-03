#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string resposta;
	
	cout << "Qual a capital do Brasil?";
	getline(cin,resposta);
	
	if(resposta=="Brasília" || resposta=="Brasilia" || resposta=="brasilia" || resposta=="DF"){
		cout << "Certa resposta." << endl;
	}else{
		cout << "Resposta errada." << endl;
	}

	return 0;
}
