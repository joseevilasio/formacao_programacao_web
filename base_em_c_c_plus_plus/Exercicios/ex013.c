#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int dia;

    printf("Insira um número de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia){

    case 1:
        printf("%d = Domingo", dia);
        break;
    
    case 2:
        printf("%d = Segunda-feira", dia);
        break;

    case 3:
        printf("%d = Terça-feira", dia);
        break;

    case 4:
        printf("%d = Quarta-feira", dia);
        break;
    
    case 5:
        printf("%d = Quinta-feira", dia);
        break;
    
    case 6:
        printf("%d = Sexta-feira", dia);
        break;

    case 7:
        printf("%d = Sábado", dia);
        break;
    
    default:
        printf("Opção inválida. Tente novamente.");
        break;
    }

}
