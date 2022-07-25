#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 float valor, c100, c50, c20, c10, c5, c2, m1, m50, m25, m10, m05, m01;
   printf("Informe o valor");
   scanf("%f", &valor);
   c100=valor / 100;
   valor=valor % 100;
   c50=valor / 50;
   valor=valor % 50;
   c20=valor / 20;
   valor=valor % 20;
   c10=valor / 10;
   valor=valor % 10;
   c5=valor / 5;
   valor=valor % 5;
   c2=valor / 2;
   valor=valor % 2;
   m1=valor / 1.0;
   valor=valor % 1.0;
   m50=valor / 0.50;
   valor=valor % 0.50;
   m25=valor / 0.25;
   valor=valor % 0.25;
   m10=valor / 0.10;
   valor=valor % 0.10;
   m05=valor / 0.05;
   valor=valor % 0.05;
   m01=valor / 0.01;
   valor=valor % 0.01;
   
   printf("NOTAS:\n %f nota(s) de R$ 100.00\n %f nota(s) de R$ 50.00\n %f nota(s) de R$ 20.00\n %f nota(s) de R$ 10.00\n %f nota(s) de R$ 5.00\n %f nota(s) de R$ 2.00\n", c100, c50, c20, c10, c5, c2);
   printf("MOEDAS:\n %f moeda(s) de R$ 1.00\n %f moeda(s) de R$ 0.50\n %f moeda(s) de R$ 0.25\n %f moeda(s) de R$ 0.10\n %f moeda(s) de R$ 0.05\n %f moeda(s) de R$ 0.01\n", m1, m50, m25, m10, m05, m01);
 
}
