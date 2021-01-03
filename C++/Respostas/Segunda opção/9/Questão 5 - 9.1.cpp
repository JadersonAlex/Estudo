#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	int mediaAluno;
	
	cout << "Informe a nota 1:";
	cin >> nota1;
	
	cout << "Informe a nota 2:";
	cin >> nota2;
	
	cout << "Informe a nota 3:";
	cin >> nota3;
	
	cout << "Informe a nota 4:";
	cin >> nota4;
	
	
	mediaAluno = (nota1+nota2+nota3+nota4)/4;
	
	if(mediaAluno>=5){
		cout << "Aprovado" << endl;
		
	}else{
	
	 cout << "reprovado" << endl;
  }
	
	
	
	
	
	return 0;
}
