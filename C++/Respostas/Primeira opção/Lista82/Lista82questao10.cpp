#include <iostream>
using namespace std;

int main(){
	double totalEleitores;
	double branco;
	double nulo;
	double valido;
	double porcBranco;
	double porcNulo;
	double porcValido;
	
	cout << "Informe a quantidade de votos brancos:";
	cin >> branco;
	cout << "Informe a quantidade de votos nulos:";
	cin >> nulo;
	cout << "Informe a quantidade de votos válidos:";
	cin >> valido;
	
	totalEleitores = branco+nulo+valido;
	
	porcBranco = branco*100/totalEleitores;
	porcNulo = nulo*100/totalEleitores;
	porcValido = valido*100/totalEleitores;
	
	cout << "Brancos: " << porcBranco << "%" << endl;
	cout << "Nulos: " << porcNulo << "%" << endl;
	cout << "Válidos: " << porcValido << "%" << endl;
	
	
	return 0;
}
