#include <iostream>
#include <locale> 

using namespace std;
int main (){
	setlocale(LC_ALL,"Portuguese"); 
	string resposta;
	
	cout << "Qual a capital do Brasil ? ";
	getline(cin,resposta);
	
	if(resposta=="Brasilia" || resposta=="Bras�lia" || resposta=="brasilia" || resposta=="bras�lia" || resposta=="DF"){
		cout << "Certa Resposta." <<endl;
	}else{
		cout << "Resposta errada." << endl;
	}
	
	

	return 0;
}
