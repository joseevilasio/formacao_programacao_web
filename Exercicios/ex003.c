#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a, b;    

    printf("Digite um número A: ");
    scanf("%d", &a);
    printf("Digite um número B: ");
    scanf("%d", &b);
    printf("A soma de %d + %d é igual a %d", a, b, a + b);

}
