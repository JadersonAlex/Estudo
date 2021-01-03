#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
int main (){
 setlocale (LC_ALL,"Portuguese");
 double raio;
 double altura;
 double volume;
 const double PI = 3.14159265;
 

 
 cout << "Informe o Raio:";
 cin >> raio;
 cout << "Informe a altura:";
 cin >> altura;
  
   volume = M_PI * pow(raio,2) * altura;
 
 	cout << "Volume:" << volume << endl;
	
	
	
	return 0;
}
