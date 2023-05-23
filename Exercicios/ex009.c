#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int velocidade;
    int velMax;
    int multa = 100;
    int multaKm = 7;

    printf("Insira a velocidade: ");
    scanf("%d", &velocidade);

    int valor = multa + (7 * (velocidade - 80));

    if(velocidade > velMax){
        printf(">> Multado! <<\n");
        printf("Valor da multa %d euros\n", valor);
    } else{
        printf("Não multado!\n");
    }
}
