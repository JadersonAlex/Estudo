#include <iostream>
using namespace std;

int main(){
	int matriz[5][3];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout << "[" << i << "," << j << "]" << endl;
			cin >> matriz[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
