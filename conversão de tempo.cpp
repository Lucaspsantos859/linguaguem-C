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
int n, hora, minuto, segundo;
   printf("Informe o valor:\n");
   scanf("%i", &n);
   
   minuto=n/60;
   segundo=n%60;
   hora=minuto/60;
   minuto=minuto%60;
  
   printf("%i:%i:%i\n", hora, minuto, segundo);

}
