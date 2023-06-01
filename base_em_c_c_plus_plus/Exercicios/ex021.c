#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int entrada[10], maior, indice;

    for (int i = 0; i < 10; i++){

        printf("Insira um número: ");
        scanf("%d", &entrada[i]);
    }

    for (int i = 0; i < 10; i++){
        if (i == 0){
            maior = entrada[i];
            indice = i + 1;
        } else{
            if (entrada[i] > maior){
                maior = entrada[i];
                indice = i + 1;
            }  
        }
              
    }

    printf("O maior número é %d e está no índice %d", maior, indice);
} 
