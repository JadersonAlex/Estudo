#include <iostream>
#include <locale>
using namespace std;

int main(){
  setlocale (LC_ALL,"Portuguese");
  double custo;
  double acre;
  double valor;
  double vari;
  
  cout  << "Custo: ";
  cin >> custo;
   
  cout << "Acrescimo:";
  cin >> acre;
  vari = acre/100;
  
  cout << "Valor:";
  valor = custo*(vari+1);

 cout << valor; 
	
 return 0;	
}
