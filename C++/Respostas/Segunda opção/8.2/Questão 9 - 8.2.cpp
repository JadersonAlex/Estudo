#include <iostream>
#include <locale>
using namespace std;

 int main (){
 	setlocale (LC_ALL,"Portuguese");
 	
 	int a;
 	int m;
 	int d;
 	int dt;
 	
 	cout << "Idade ";
	 cin >> a;
	 
	 cout << "Meses ";
	 cin >> m;
	 
	 cout << "dias ";
	 cin >> d;
	  
	 cout << "Dias totais ";
	 
	 dt = (a*365)+(m*30)+d;
	 cout << dt;
	 
	return 0;
	
 }
