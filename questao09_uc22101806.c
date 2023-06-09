#include <stdio.h>
#include <stdlib.h>


/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/


int main() {
    int opcao, quantidade;
    float valor_total = 0.0;

    printf("Bem-vindo ao mercado de frutas do Talys!\n\n");
    do {
        printf("Escolha a fruta que deseja comprar:\n");
        printf("1 - MORANGO (R$ 10,00 a embalagem)\n");
        printf("2 - BANANA (R$ 3,99 a unidade)\n");
        printf("3 - PERA (R$ 4,00 a unidade)\n");
        printf("0 - Finalizar compra\n");
        printf("Mercadinho do Talys: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de morangos que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de Banana que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4.0;
                break;
            case 0:
                printf("Compra finalizada! O valor total da compra foi: R$ %.2f\n", valor_total);
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}