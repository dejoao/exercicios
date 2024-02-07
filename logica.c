#include <stdio.h>

/* 1 - Faça um algoritmo que leia os valores de A, B, C e em seguida imprima 
na tela a soma entre A e B é mostre se a soma é menor que C.
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
}*/

/*2 - Faça um algoritmo para receber um número qualquer e imprimir na tela se o 
número é par ou ímpar, positivo ou negativo.

int main(void){

    int x;

    //Solicitando ao usuario o valor de x
    printf("Digite um valor:");
    scanf("%d", &x);

    //Verificando se é par ou impar e se é negativo ou positivo
    if (x % 2 == 0 && x > 0)
    {
        printf("O numero %d e par e positivo.", x);
    } else if (x % 2 == 0 && x < 0)
    {
         printf("O numero %d e par e negativo.", x);
    } else if (x % 2 != 0 && x > 0)
    {
        printf("O numero %d e impar e positivo.", x);
    } else if (x % 2 != 0 && x < 0)
    {
        printf("O numero %d e impar e negativo.", x);
    }

    return 0;
}*/

/*3 Dada uma matriz de inteiros.

Retorna uma matriz, onde o primeiro elemento é a contagem dos números positivos 
e o segundo elemento é a soma dos números negativos. 0 não é positivo nem 
negativo.

Se a entrada for uma matriz vazia ou nula, retorne uma matriz vazia.*/

int main(void)
{
    int m[15] = {1,2,3,4,5,6,7,8,9,10,-11,-12,-13,-14,-15};
    int i, j, s;

    for (i = 0; i < 9; i++)
    {
    }
    for ( j = 10; j < 15; j++)
    {
        s += m[j];
    }
     printf("%i %i", m[i], s);
}