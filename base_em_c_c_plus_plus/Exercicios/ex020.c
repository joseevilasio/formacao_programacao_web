#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

void main(){
    setlocale(LC_ALL, "");

    int opcao;

    while (opcao !=3){

        //Menu    
        printf("-- Jogo do Par ou Ímpar --\n");
        printf("--------------------------\n\n");
        printf("-- Menu --\n");
        printf("[1] - Iniciar jogo\n[2] - Regras\n[3] - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:
            printf("Jogo iniciado");
            break;
        
        case 2:
            printf("Regras");
            break;
        
        case 3:
            printf("Até a próxima ! ...");
            break;

        default:
            printf("Opção inválida, tente novamente!\n\n");
            break;
        }
    
    }
}
