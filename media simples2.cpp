/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a, b, c, media, psa, psb, psc, somaps;
    psa=2;
    psb=3;
    psc=5;
    somaps=psa+psb+psc;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    media=(a*psa+b*psb+c*psc)/somaps;
    printf("MEDIA = %.1lf\n", media);
}
