#include <stdio.h>

/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5*/


int main() {
    int sum = 0;
    int i;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("A soma de todos os numeros naturais abaixo de 1.000 que sao multiplos de 3 ou 5 e %d\n", sum);

    return 0;
}