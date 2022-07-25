#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nome[100];
	double sal, novosal, vendas;
	
	printf("Informe o nome do vendedor: \n");
	scanf("%s", nome);
	printf("Informe o salario do vendedor: \n");
	scanf("%lf", &sal);
	printf("Informe o total de vendas feita pelo vendendor: \n");
	scanf("%lf", &vendas);
	
	novosal=sal+(vendas*15/100);
	
	printf("Total a receber: %.3lf\n", novosal);
}
