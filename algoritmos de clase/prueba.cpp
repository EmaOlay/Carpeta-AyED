#include <iostream>
using namespace std;

/* 
Se realizo una inspeccion en una fabrica de pinturas y se detectaron 10 infracciones. De cada infraccion se tomo nota de los siguientes datos:
- tipo de infraccion (1,2,3 o 4)
- valor de la multa
- Gravedad de la infraccion (L,M o G)

Usted debe realizar un programa que solicite los datos de las 10 infracciones al usuario e informe, al final del proceso, lo siguiente:
a. Los valores totales de la multa a pagar de acuerdo al tipo de Gravedad.
b. La leyenda "clausurar fabrica" si la cantidad de infracciones 3 y 4 con gravedad G sea mayor.
*/

int main() {

int i;
char tipo[10];
char gravedad;
float multaValor;

int contadorL=0;
int contadorM=0;
int contadorG=0;
// int contadorL;
// int contadorM;
// int contadorG;

	for (i=0;i<3;i++){
		
		cout << "Ingrese el tipo de infraccion (1,2,3 o 4): ";
		cin >> tipo;
		cout << "Ingrese la gravedad de la infraccion (L,M o G): ";
		cin >>	gravedad;
		cout << "Ingrese el valor de la multa: ";
		cin >> multaValor;
		
	if(gravedad == 'L'){
			
			contadorL = contadorL + multaValor;
							
	}else if(gravedad == 'M'){
			
			contadorM = contadorM + multaValor;

	}else{
		
		contadorG = contadorG + multaValor;

	}

}

	cout<< "El valor de las multas de gravedad G es $ " << contadorG << ".\n";
	cout<< "El valor de las multas de gravedad M es $ " << contadorM << ".\n";
	cout<< "El valor de las multas de gravedad L es $ " << contadorL << ".\n";

}