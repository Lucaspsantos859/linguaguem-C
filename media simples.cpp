/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a, b, media, penota, penotb, soma;
    penota=3.5;
    penotb=7.5;
    soma=penota+penotb;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    media=(a*penota+b*penotb)/soma;
    printf("MEDIA = %.5lf\n", media);
}
