#include <stdio.h>
#include <stdlib.h>
// Lista construção algoritmos
// Exercicio 7
int main()
{

float valor_puro;
float valor_final_imposto;
float imposto_dist;
float imposto_gov;
float total_imposto;

printf("Digite o valor do veiculo: \n");
scanf("%f", &valor_puro);

imposto_dist = valor_puro*0.28;
imposto_gov = valor_puro*0.45;

valor_final_imposto = valor_puro + imposto_dist + imposto_gov;
total_imposto = imposto_dist + imposto_gov;


printf("Valor final ao consumidor = %0.2f \n", valor_final_imposto);
printf("Imposto da distribuidora = %0.2f \n", imposto_dist);
printf("Imposto governamental = %0.2f \n", imposto_gov);
printf("Valor total de imposto = %0.2f \n", total_imposto);






}