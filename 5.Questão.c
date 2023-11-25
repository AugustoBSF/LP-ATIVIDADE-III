#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main()
{

 
    setlocale(LC_ALL, "portuguese");
    int i;
    int posicao = 0;
    int codigo = 0;
    char nomeDoProduto[999][200];
    float preco[999];
    int quantidade[999];
    float valorTotal[999];

  

    do
    {
        printf("ADICIONAR VENDA -------- 1\n");
        printf("  PARA SAIR ------------- 2\n");
        printf("\n");

        printf("Informe o código: ");
        scanf("%d", &codigo);

        fflush(stdin);
//setbuf(stdin,0); GDB

        switch (codigo)
        {
        case 1:

            fflush(stdin);
          //setbuf(stdin,0) GDB
            printf("Informe o nome do produto: ");
            gets(nomeDoProduto[posicao]);

            fflush(stdin);
          //setbuf(stdin,0); GDB
            
            printf("\nInforme o valor: R$");
            scanf("%f", &preco[posicao]);

            printf("\nInforme a quantidade: ");
            scanf("%d", &quantidade[posicao]);
            printf("\n");

            valorTotal[posicao] = preco[posicao] * quantidade[posicao];

            posicao++;
            break;

        case 2:

            printf("Saindo...\n");
            sleep(1);
            printf("Exibindo lista de vendas...\n");
            sleep(1);
            system("cls || clear");
            break;

        default:

            printf("Opção inválida");
            break;
        }

        fflush(stdin);
//setbuf(stdin,0); GDB
    } while (codigo != 2);

    

    for (i = 0; i < posicao; i++)
    {
        printf("Produto: %s\n", nomeDoProduto[i]);
        printf("Preço: R$%.2f\n", preco[i]);
        printf("Quantidade: %d\n", quantidade[i]);
        printf("Valor total a pagar: R$%.2f\n", valorTotal[i]);
        printf("\n");
    }

    getchar();
    return 0;
}
