#include <iostream>
#include <locale>
using namespace std;

int main (){
 setlocale (LC_ALL,"Portuguese");
 double branco;
 double nulo;
 double valido;
 double totalEleitores;
 double porcBranco;
 double porcNulo;
 double porcValido;
 
 
 cout << "Informe a quantidade de votos brancos: ";
 cin >> branco;
 
 cout << "Informe a quantidade de votos  Nulos: ";
 cin >> nulo;
 
 cout << "Informe a quantidade de votos Válidos";
 cin >> valido;

 totalEleitores = branco+nulo+valido;


 porcBranco = branco*100/totalEleitores;
 porcNulo = nulo*100/totalEleitores;
 porcValido = valido*100/totalEleitores;
 
cout << "Brancos: " << porcBranco << "%" << endl;
cout << "Nulos " << porcNulo << "%" << endl;
cout << "válidos " << porcValido << "%" << endl;

return 0;

}


