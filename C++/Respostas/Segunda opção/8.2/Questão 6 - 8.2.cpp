#include <iostream>
#include <locale>
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	double salario;
	double vendas;
	double comissao;
	double salarioFinal;
	
	cout << "Nome: ";
	getline(cin,nome);
	cout << "Salário: ";
	cin >> salario;
	cout << "Vendas: ";
	cin >> vendas;
	comissao = vendas + 0.15;
	salarioFinal = comissao + salario;
	
	
	cout << "Nome: " << nome << endl;
	cout << "Salário fixo: " << salario << endl;
	cout << "Salário completo: " << salarioFinal << endl;	
	
	return 0; 
	
}
