#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num;
    printf("Insira um número para mostrar sua tabuada: ");
    scanf("%d", &num);

    for (int i = 1; i < 11; i++){
        printf("%d x %d = %d \n", num, i, (i * num));
    }
}
