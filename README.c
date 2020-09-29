// Faça um programa que receba do usuário a quantidade de elementos de uma Progressão Geométrica (PG)
// e a razão, gere uma PG em lista com a quantidade de elementos definidos pelo usuário e imprima.
// Uma PG tem como primeiro elemento o número 1 e o próximo elemmento é o anterior multiplicado da razão.

#include <stdio.h>
#include <math.h>

int main()
{
		
    double a1, sn, termo;
    int i, q, n;
    
    	printf("Insira o primeiro termo : ");
    	scanf ( "%lf", &a1);
    	printf("Insira  a razao : ");
    	scanf ( "%d", &q);
    	printf("Insira a quantidade de termos: ");
    	scanf ( "%d", &n);

    	termo=a1;
    for (i=0; i<=n-1; i++)
	{
     	printf("O termo da posicao %d  = %.0f\n", i, termo);
     	termo=termo*q;
	}
   		sn = ((a1*(pow(q,n) - 1))/(q-1));
    	printf("Soma dos termos da PG e: %.0f", sn);
  	return 0;
}
