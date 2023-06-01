#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num, resto = 0;
    printf("Insira um número para verificar se é primo: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        int conta = num % i;
        if (conta == 0){
            resto++;
        }
    }
    if (resto ==2){
        printf("O número %d é primo", num);
    } else{
        printf("O número %d não é primo", num);
    }
}
