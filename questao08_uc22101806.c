#include <stdio.h>

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

int main() {
    int num, maior, menor;

    // LÃª o primeiro nÃºmero e inicializa maior e menor com ele
    printf("Digite um numero que deseja: ");
    scanf("%d", &num);
    maior = menor = num;

    // LÃª mais nÃºmeros, atualizando maior e menor se necessÃ¡rio
    while (num >= 0) {
        printf("Digite outro numero que deseja: ");
        scanf("%d", &num);
        
        if (num < 0) {
            printf("ERRO: Numero negativo digitado.\n");
            break;
        }
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
    }

    // Imprime o maior e o menor nÃºmero
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero foi: %d\n", menor);

    return 0;
}