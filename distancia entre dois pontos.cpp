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

    float x1, y1, x2, y2, distancia;
    
    printf("Informe os valores do eixo x1 e y1:\n");
    scanf("%f %f", &x1, &y1);
    printf("Informe os valores do eixo de x2 e y2:\n");
    scanf("%f %f", &x2, &y2);
    distancia=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("%.4f\n", distancia);
    
}
