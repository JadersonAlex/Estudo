#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
 int n1;
 
 cout << "Informe N1:";
 cin >> n1;
 	
	
 if(n1>0){
 	cout << "Positivo" << endl;
 	
 }else{
  if(n1<0){
  	cout << "Negativo" << endl;
  }else{
  	cout << "Nulo" << endl;
  }
}
 	

 
	
	
	
	
   return 0;
}
