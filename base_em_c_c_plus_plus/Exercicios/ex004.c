#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num;

    printf("Insira um número: ");
    scanf("%d", &num);
    printf("%d é antecessor de %d e o seu sucessor é %d.", num - 1, num, num +1);
}
