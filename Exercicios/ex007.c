#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int anoUtilizador;
    int anoAtual;

    printf("Insira o ano de seu nascimento: ");
    scanf("%d", &anoUtilizador);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    printf("A sua idade é %d", anoAtual - anoUtilizador);

}
