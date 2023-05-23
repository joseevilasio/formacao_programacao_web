#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "");

    int kmPercorridos;
    int diasAlugados;

    int valorDia = 60;
    float valorKm = 0.456;

    printf("------- Bem vindo ao AlugaCAR -------\n");
    printf("-------------------------------------\n");

    printf("Quantidade de dias alugados\n");
    printf(">>> ");
    scanf("%d", &diasAlugados);

    printf("Quantidade de km percorridos\n");
    printf(">>> ");
    scanf("%d", &kmPercorridos);

    float valorPagar = (diasAlugados * valorDia) + (kmPercorridos * valorKm);

    printf("\n-| Total de dias alugado > %d < |-\n-| Total de km percorridos > %d < |-\n", diasAlugados, kmPercorridos);
    printf("Total do valor a pagar: %.2f euros.\n", valorPagar);
    printf("-------------------------------------\n");
    printf("----------- Volte Sempre ------------\n");

}
