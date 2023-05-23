#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    /*declarar variáveis do tipo INT
    int a = 20, b = 40, c = 60; //declarar em linha


    //Declarar individualmente
    int a = 20;
    int b = 40;
    int c = 60;


    printf("O valor de a é %d\n", a);
    printf("O valor de a é %d\n", b);
    printf("O valor de a é %d\n", c);
    printf("O valor de soma entre a, b, c é igual a %d", a + b + c);*/
    

    //declarar variáveis do tipo FLOAT
    float a, b, c;

    //ler valores para as variáveis
    printf("Digite um valor para a: ");
    scanf("%f", &a);
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para c: ");
    scanf("%f", &c);
    printf("a = %.1f \nb = %2.f \nc = %.3f", a, b, c);

    /*declarar variáveis do tipo CHAR
    char a = 'R';
    char b = 'I';
    char c = 'O';

    printf("%c%c%c", a, b, c);*/
}
