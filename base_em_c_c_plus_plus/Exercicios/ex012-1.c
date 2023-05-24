#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "");

    srand(time(NULL));

    int jogadorDois = 1 + rand() % 3;
    int jogadorUm;    

    printf("------ Jogo Iniciado ------\n");    
    printf("Escolha uma opção no Menu\n");
    printf("[1] -- Pedra\n[2] -- Papel\n[3] -- Tesoura\n");
    printf("---------------------------\n");    
    printf("Jogador UM: ");
    scanf("%d", &jogadorUm);

    /*
    printf("Jogador DOIS: ");
    scanf("%d", &jogadorDois);*/

    printf("---------------------------\n");
    printf("-------- Resultado --------\n");

    if(jogadorUm == jogadorDois){
        printf("Empate entre os jogadores");

    } else if(jogadorUm == 1){

        if(jogadorDois == 2){
            printf("Jogador UM - Pedra vs Papel - Jogador DOIS\n");
            printf("Jogador DOIS ganhou!!!");

        } else if(jogadorDois == 3){
            printf("Jogador UM - Pedra vs Tesoura - Jogador DOIS\n");
            printf("Jogador UM ganhou!!!");
        }
        
    } else if(jogadorUm == 2){

        if(jogadorDois == 3){
            printf("Jogador UM - Papel vs Tesoura - Jogador DOIS\n");
            printf("Jogador DOIS ganhou!!!");

        } else if(jogadorDois == 1){
            printf("Jogador UM - Papel vs Pedra - Jogador DOIS\n");
            printf("Jogador UM ganhou!!!");
        }
    } else if(jogadorUm == 3){

        if(jogadorDois == 1){
            printf("Jogador UM - Tesoura vs Pedra - Jogador DOIS\n");
            printf("Jogador DOIS ganhou!!!");

        } else if(jogadorDois == 2){
            printf("Jogador UM - Tesoura vs Papel - Jogador DOIS\n");
            printf("Jogador UM ganhou!!!");
        }
    } else {
        printf("Entrada inválida tente novamente, atenção ao menu!");
    }
}
