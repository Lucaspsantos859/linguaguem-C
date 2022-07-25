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
   int n, ano, mes, dia;
   printf("Informe o valor:\n");
   scanf("%i", &n);
   
   ano=n/365;
   dia=n%365;
   mes=dia/30;
   dia=dia%30;
  
   printf(" %i ano(s)\n %i mes(es)\n %i dia(s)\n", ano, mes, dia);
 
}
