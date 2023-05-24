#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int resto = (num % 2);

    if(resto != 0){
        printf("O número %d é ímpar.", num);
    } else{
        printf("O número %d é par.", num);
    }
}
