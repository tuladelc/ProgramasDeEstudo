#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Lista construção algoritmos
// Exercicio 5

int main()
{

float x1, x2, y1, y2, d, r;
// obtendo valores do ponto 1: x1 e y1
printf("Digite os valores de x1 e y1 do ponto 1: \n");
printf("x1:");
scanf("%f", &x1 ,"\n");
printf("y1:");
scanf("%f", &y1, "\n");
// obteando valores do ponto 2: x2 e y2
printf("Digite os valores de x2 e y2 do ponto 2: \n");
printf("x2:");
scanf("%f", &x2 ,"\n");
printf("y2:");
scanf("%f", &y2, "\n");

// realizando a operação com os valores de entrada

d = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
r = sqrt(d);

printf("A distancia entre o ponto 1 e o ponto 2 e: %0.2f", r);




}