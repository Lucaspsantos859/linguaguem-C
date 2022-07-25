/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    	
	double raio, pi, vol, cubo;
	pi=3.14159;
	printf("Informe o raio da esfera: \n");
	scanf("%lf", &raio);
	cubo=raio*raio*raio;
	vol=(4.0/3)*pi*cubo;
	printf("VOLUME = %.3lf", vol);
	
	
}
