#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main()
{

    // variaveis
    setlocale(LC_ALL, "portuguse");
    int i;

    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];

    float pessoaAlta = 0;
    float pessoaBaixa = 999999;

    float pessoaPesadinha = 0;
    float pessoaLeve = 99999;

    int pessoaVelhinha = 0;
    int pessoaNovinha = 999999;

    int posicaoAlturaMaior;
    int posicaoAlturaMenor;

    int posicaoPesoMaior;
    int posicaoPesoMenor;

    int posicaoIdadeMaior;
    int posicaoIdadeMenor;

    // usuario

    for (i = 0; i < 5; i++)
    {
        printf("Dados da %dº pessoa: \n", i + 1);
        printf("\n");

        printf("Informe o seu nome: ");
        gets(nome[i]);

        fflush(stdin);

        printf("Informe sua idade: ");
        scanf("%d", &idade[i]);

        printf("Informe seu peso: ");
        scanf("%f", &peso[i]);

        fflush(stdin);

        printf("Informe sua altura: ");
        scanf("%f", &altura[i]);

        pessoaAlta = pessoaAlta > altura[i] ? pessoaAlta : altura[i];
        pessoaBaixa = pessoaBaixa < altura[i] ? pessoaBaixa : altura[i];

        if (pessoaAlta = altura[i])
        {
            posicaoAlturaMaior = i;
        }
        else
        {
            posicaoAlturaMenor = i;
        }

        pessoaPesadinha = pessoaPesadinha > peso[i] ? pessoaPesadinha : peso[i];
        pessoaLeve = pessoaLeve < peso[i] ? pessoaLeve : peso[i];

        if (pessoaPesadinha = peso[i])
        {
            posicaoPesoMaior = i;
        }
        else
        {
            posicaoPesoMenor = i;
        }

        pessoaVelhinha = pessoaVelhinha > idade[i] ? pessoaVelhinha : idade[i];
        pessoaNovinha = pessoaNovinha < idade[i] ? pessoaNovinha : idade[i];

        if (pessoaVelhinha = idade[i])
        {
            posicaoIdadeMaior = i;
        }
        else
        {
            posicaoIdadeMenor = i;
        }

        fflush(stdin);
    }

    
    {
        system("cls || clear");
    }
    printf("Exibindo resultados....");
    sleep(1);
    for (i = 0; i < 5; i++)
    {
        printf("Dados da %dº pessoa: \n", i + 1);
        printf("\n");
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Peso: %.2f kg\n", peso[i]);
        printf("Altura: %.2f m\n", altura[i]);
        printf("\n");
    }

    printf("Nome da pessoa da pessoa mais alta: %s\n", nome[posicaoAlturaMaior]);
    printf("Sua altura: %.2f m \n", pessoaAlta);
    printf("Nome da pessoa da pessoa mais baixa: %s\n", nome[posicaoAlturaMenor]);
    printf("Sua altura: %.2f m \n ", pessoaBaixa);
    printf("\n");

    printf("Nome da pessoa com maior peso: %s\n", nome[posicaoPesoMaior]);
    printf("Seu peso: %.2f \n", pessoaPesadinha);
    printf("Nome da pessoa com menor peso: %s\n", nome[posicaoPesoMenor]);
    printf("Seu peso: %.2f \n", pessoaLeve);
    printf("\n");

    printf("Nome pessoa com maior idade: %s\n", nome[posicaoIdadeMaior]);
    printf("Sua idade: %d \n", pessoaVelhinha);
    printf("Nome pessoa com menor idade: %s\n", nome[posicaoIdadeMenor]);
    printf("Sua idade: %d \n", pessoaNovinha);
    printf("\n");

    getchar();
    return 0;
}
