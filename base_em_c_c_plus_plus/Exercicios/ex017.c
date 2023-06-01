#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num;
    printf("Insira um número para iniciar a contagem progressiva: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("%d\n", i);
    }
}
