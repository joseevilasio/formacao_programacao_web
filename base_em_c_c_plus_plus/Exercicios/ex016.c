#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num;
    printf("Insira um número para iniciar a contagem regressiva: ");
    scanf("%d", &num);

    for (num; num > 0; num--){
        printf("%d\n", num);
    }
}   
