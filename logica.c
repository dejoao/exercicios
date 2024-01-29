#include <stdio.h>

/* 1 - Faça um algoritmo que leia os valores de A, B, C e em seguida imprima
na tela a soma entre A e B é mostre se a soma é menor que C. */

int main(void) {

    int a, b, c;

    //Recebe valor de A
    printf("Qual o valor de A? ");
    scanf ("%d", &a);
    
    //Recebe valor de B
    printf("Qual o valor de B? ");
    scanf ("%d", &b);

    //Recebe o valor de C
    printf("Qual o valor de C? ");
    scanf ("%d", &c);

    //Faz a soma de A e B e mostra na tela o resultado
    int soma = a + b;
    printf("A soma de %d e %d e: %d\n", a, b, soma);

    //Mostra que a soma de A e B é menor que C
    if (soma < c) {
        printf("A soma de %d e %d e menor que %d", a, b, c);
    }
    
    return 0;

}

