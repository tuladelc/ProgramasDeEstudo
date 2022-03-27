#include <stdio.h>
#include <stdlib.h>
// Lista construção algoritmos
// Exercicio 1 e 2
int main()
{
//mes 1
float deposito1 = 400.00;
float retirada1 = 0;
float valor_final1 = deposito1 - retirada1;
float rend1 = valor_final1 + (valor_final1*0.02);

//mes 2
float deposito2 = 900.00;
float retirada2 = 0;
float valor_final2 = deposito2 - retirada2;
float rend2 = valor_final2 + (valor_final2*0.02);

//mes 3 
float deposito3 = 700;
float retirada3 = 0;
float valor_final3 = deposito3 - retirada3;
float rend3 = valor_final3 + (valor_final3*0.02);

//mes 4 
float deposito4 = 500;
float retirada4 = 0;
float valor_final4 = deposito4 - retirada4;
float rend4 = valor_final4 + (valor_final4*0.02);

//variaveis finais
float valor_total_crend = rend1 + rend2 + rend3 + rend4;
float valor_total_srend = valor_final1 + valor_final2 + valor_final3 + valor_final4;
float valor_apenas_rend = (valor_total_crend - valor_total_srend);

printf("Valor total e %0.2f \n", valor_total_crend);

printf("Valor apenas do rendimento e %0.2f \n", valor_apenas_rend);
 

}