#include <stdio.h>

/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/


int main() {
    int a, b, c, d;
    int diferenca;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Digite o valor de D: ");
    scanf("%d", &d);

    diferenca = a * b - c * d;

    printf("\nDIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("ESSE CALCULO TEM O RESULTADO DE = (%d)\n", diferenca);

    return 0;
}