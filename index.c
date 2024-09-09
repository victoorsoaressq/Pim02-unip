#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VARIÁVEIS
    int opcao1;
    int opcao2;

    int leg1[8] = {0,0,0,0,0,0,0,0};

    // TELA DE BEM VINDO
    system("clear");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("*** BEM VINDO AO UNIHORT ***\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Digite abaixo o número correpondente a função desejada! \n");
    printf("\n");
    printf("\n");
    printf("Digite [1] para Seleção de produtos \n");
    printf("Digite [2] para Selecionar a forma de pagamento \n");
    printf("Digite [3] para ler o manual do programa \n");
    printf("\n");
    printf("OPÇÃO: ");
    scanf("%d", &opcao1);

    system("clear");

    if (opcao1 == 1)
    {
        // TELA DE SELEÇÃO DE PRODUTOS

        printf("\n");
        printf("\n");
        printf("\n");
        printf("*** SESSÃO PRODUTOS ***\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("Digite abaixo o número correpondente a função desejada!\n");
        printf("\n");
        printf("\n");
        printf("Digite [1] para VERDURAS \n");
        printf("Digite [2] para LEGUMES \n");
        printf("Digite [3] para FRUTAS \n");
        printf("\n");
        printf("OPÇÃO: ");
        scanf("%d", &opcao2);

        system("clear");

        if (opcao2 == 1) 
        {
            printf("\n");
            printf("\n");
            printf("\n");
            printf("*** SESSÃO VERDURAS ***\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("Digite abaixo os números correpondente as verduras que deseja selecionar!\n");
            printf("\n");
            printf("\n");

            // PRIMEIRA LINHA

            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ \n");

            printf("   | ALFACE   | ");
            printf("   | BATATA   | ");
            printf("   | COUVE    | ");
            printf("   | CEBOLA   | \n");

            printf("   |   $5,00  | ");
            printf("   |   $0,50  | ");
            printf("   |   $2,50  | ");
            printf("   |   $0,70  | \n");

            printf("   |    N:1   | ");
            printf("   |    N:2   | ");
            printf("   |    N:3   | ");
            printf("   |    N:4   | \n");
            
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------  \n");

            // SEGUNDA LINHA

            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ \n");

            printf("   | CHUCHU   | ");
            printf("   | ERVILHA  | ");
            printf("   | BRÓCOLIS | ");
            printf("   | ABÓBORA  | \n");

            printf("   |   $2,50  | ");
            printf("   |   $1,30  | ");
            printf("   |   $5,00  | ");
            printf("   |   $10,00 | \n");

            printf("   |    N:5   | ");
            printf("   |    N:6   | ");
            printf("   |    N:7   | ");
            printf("   |    N:8   | \n");
            
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------ ");
            printf("   ------------  \n");

            printf("\n");
            printf("Numeros dos legumes: ");
            scanf("%d", leg1);

              
            
        }
    }
}