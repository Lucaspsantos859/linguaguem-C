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

       float consumo;
  int km,tempo ;
  
  printf("Informe o tempo da viagem;\n");
  scanf("%i", &tempo);
  printf("Informe a velocidade do veiculo em km:\n");
  scanf("%i", &km);
 
  
  consumo=(km*tempo)/12;
 
  printf("%.3f\n", consumo);
    
}
