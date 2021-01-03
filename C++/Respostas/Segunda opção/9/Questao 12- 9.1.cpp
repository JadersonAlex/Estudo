#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;
	int maior;
	int menor;
	
	cout << "Informe n1: ";
	cin >> n1;
	
	
	cout << "Informe n2: ";
	cin >> n2;
	
	cout << "Informe n3: ";
	cin >> n3;
	
	cout << "Informe n4: ";
	cin >> n4;
	
	cout << "Informe n5: ";
	cin >> n5;
	
	
	maior =  n1;
	
	
	if(n2>maior){
		maior = n2;
	}
	if(n3>maior) {
		maior = n3;
	}
	if(n4>maior) {
		maior = n4;
	}
	if(n5>maior){
		maior = n5;
	} 
	cout << "maior" << maior << endl;
	
	menor = n1;
	
    if(n2<menor){
    	menor = n2;
    }
    if(n3<menor){
    	menor = n3;
    }
    if(n4<menor){
    	menor = n4;
    }
    if(n5<menor){
    	menor = n5;
    }
     cout << "menor" << menor << endl;
    


	
	
	
	
	

	
	
	return 0;
}
