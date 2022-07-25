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
	double a, b, c, tri, circ, trap, quad, reta, pi;
	pi=3.14159;
	printf("Insira o valor de A: \n");
	scanf("%lf", &a);
	printf("Insira o valor de B: \n");
	scanf("%lf", &b);
	printf("Insira o valor de C: \n");
	scanf("%lf", &c);
	
	tri=a*c/2;
	circ=pi*(c*c);
	trap=(a+b)*c/2;
	quad=b*b;
	reta=a*b;
	
	printf("TRIANGULO: %.3lf\n", tri);
	printf("CIRCULO: %.3lf\n", circ);
	printf("TRAPEZIO: %.3lf\n", trap);
	printf("QUADRADO: %.3lf\n", quad);
	printf("RETANGULO: %.3lf\n", reta);
	
	
	
}
