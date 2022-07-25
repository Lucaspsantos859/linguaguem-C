/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


using namespace std;

int main()
{
    	
	int codpec1, numpec1, codpec2, numpec2;
	double valor1, valor2, valortotal;
	
	printf("Informe o codigo da peça 1, a quantidade de peças, e o valor de cada peça: \n");
	scanf("%i%i%lf", &codpec1, &numpec1, &valor1);
	
	printf("Informe o codigo da peça 2, a quantidade de peças, e o valor de cada peça: \n");
	scanf("%i%i%lf", &codpec2, &numpec2, &valor2);
	
	valortotal=(numpec1*valor1)+(numpec2*valor2);
	printf("Total a pagar = R$ %.2lf", valortotal);	
}
