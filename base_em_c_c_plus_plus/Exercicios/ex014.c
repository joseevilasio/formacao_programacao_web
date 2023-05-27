#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int numA, numB, opcao;

    printf("Insira o primeiro valor: ");
    scanf("%d", &numA);

    printf("Insira o segundo valor: ");
    scanf("%d", &numB);

    printf("------------------------------\n");
    printf("------Escolha uma Opção-------\n");
    printf("> 1 - Soma\n");
    printf("> 2 - Subtração\n");
    printf("> 3 - Divisão\n");
    printf("> 4 - Multiplicação\n");
    printf(">>>  ");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:        
        printf("|%d + %d = %d|\n", numA, numB, (numA + numB));
        break;
    
    case 2:
        printf("|%d - %d = %d|\n", numA, numB, (numA - numB));
        break;

    case 3:
        printf("|%d / %d = %d|\n", numA, numB, (numA / numB));
        break;

    case 4:
        printf("|%d * %d = %d|\n", numA, numB, (numA * numB));
        break;

    default:
        printf("Opção inválida. Tente novamente.");
        break;
    }

}
