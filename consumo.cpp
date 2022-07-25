/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int km;
    float vlgasto, consumo;
    
    printf("Informe a distancia percorrida:\n");
    scanf("%i", &km);
    printf("Informe o valor gasto:\n");
    scanf("%f", &vlgasto);
    
    consumo=km/vlgasto;
    
    printf("%.3f km/l\n", consumo);
}
