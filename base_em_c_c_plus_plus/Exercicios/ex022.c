#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int entrada[5];
    int invertidoEntrada[5];

    for (int i = 0; i < 5; i++){

        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &entrada[i]);
    }

    for (int i = 4; i >= 0; i--){
        invertidoEntrada[i] = entrada[i];              
    }

    for (int i = 4; i >= 0; i--){
        printf("%d\n", invertidoEntrada[i]);
    }    
} 
