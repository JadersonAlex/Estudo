#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	double valor;
	double taxa;
	double tempoEmDias;
	double prestacao;
	
	cout << "Valor: ";
	cin >> valor;
	cout << "Taxa: ";
	cin >> taxa;
	cout << "Tempo em dias: ";
	cin >> tempoEmDias;
	
	prestacao = valor+(valor*(taxa/100)*tempoEmDias);
	
	cout << "Prestação: " << prestacao;
	
	return 0;
}
