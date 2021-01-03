#include <iostream>
#include <math.h>
using namespace std;

int main (){
	double r;
	double area;
	
	cout << "Raio:";
	cin >> r; 
	
	area = M_PI * pow(r,2);
	
	cout << "Area:" << area << endl;
	
	
	return 0;
}
