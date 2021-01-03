#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main (){
	setlocale (LC_ALL,"Portuguese");
	double  horaAula;
    double 	numeroHoras;
    double inss;
    double salarioLiquido1;
    double salarioLiquido2;
    double salarioBruto;
    
    cout << "Informe o valor da hora aula:";
    cin >> horaAula;
    
    cout << "Número de horas trabalhadas ao mês:";
    cin >> numeroHoras;
    
    cout << "Informe o percentual de desconto do INSS:";
    cin >>  inss;
    
    salarioBruto = horaAula * numeroHoras;
    salarioLiquido1 = (1-inss/100)*salarioLiquido1;
    salarioLiquido2 = salarioBruto-(salarioBruto*inss/100);
    
    cout << "Salário líquido 1:" << salarioLiquido1 << endl;
    cout << "Salario Líquido 2:" << salarioLiquido2 << endl;
    cout << "Inss:" << inss << "%" << endl;
    
	
	return 0;
}
