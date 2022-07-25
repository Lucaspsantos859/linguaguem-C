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
   int a, b, c, maior;
   
    printf("Insira o primeiro numero: \n");
    scanf("%i", &a);
    printf("Insira o segundo numero: \n");
    scanf("%i", &b);
    printf("Insira o terceiro numero: \n");
    scanf("%i", &c);
    
    maior=(a+b+abs(a-b))/2;
    if(maior>c){
        printf("%i eh o maior\n", maior);
    }else{
        printf("%i eh o maior\n", c);
    }
}
