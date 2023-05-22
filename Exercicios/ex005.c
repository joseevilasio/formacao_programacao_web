#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    // Declarar as variavéis
    int a, b;

    // Receber os valores
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite um outro número: ");
    scanf("%d", &b);

    //Calcular soma
    printf("A soma entre %d e %d é igual a %d\n", a, b, a + b);
    //Calcular subtração
    printf("A subtração entre %d e %d é igual a %d\n", a, b, a - b);
    //Calcular Multiplicação
    printf("A multiplicação entre %d e %d é igual a %d\n", a, b, a * b);
    //Calcular Divisão
    printf("A divisão entre %d e %d é igual a %d\n", a, b, a / b);
    //Calcular resto
    printf("O resto da divisão entre %d e %d é igual a %d", a, b, a % b);

}
