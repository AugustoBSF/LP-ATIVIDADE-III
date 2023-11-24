#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 int quantidadeDeNumerosPares=0;
 int quantidadeDeNumerosImpares=0;
int numeros[5];
int i;
int numeroNegativo=0;
int maiorNumero=0;
int menorNumero= 9999999999999;
float mediaPares=0;
int somaDosNumeroPares=0;


for ( i = 0; i < 5; i++)
{
    printf("Digite o %d° interiros:  ", i+1);
    scanf("%d", &numeros[i]);

    if (numeros[i] %2 == 0)
    {
        quantidadeDeNumerosPares+=1;
        somaDosNumeroPares+= numeros[i];
    }
    else
    {
        quantidadeDeNumerosImpares+=1;
    }
    maiorNumero = numeros[i]> maiorNumero? numeros[i]: maiorNumero;
    menorNumero = numeros[i]< menorNumero? numeros[i]: menorNumero;
    if (numeros[i]<0)
    {
        numeroNegativo++;
    }
    
}

mediaPares = somaDosNumeroPares/ quantidadeDeNumerosPares;
printf("\n");
printf("\n");
printf("Carregando resultados....");
sleep(1);

printf("\nQuantidade de números ímpares: %d", quantidadeDeNumerosImpares);
printf("\nQuantidade de números negativos: %d",numeroNegativo);
printf("\nMaior número: %d", maiorNumero);
printf("\nMenor número: %d", menorNumero);
printf("\nmedia dos número pares: %.1f",mediaPares);




























    getchar();
    return 0;

}