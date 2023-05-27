#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int nota;

    printf("Insira a nota final (0 - 20): ");
    scanf("%d", &nota);

    switch (nota){

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:        
        printf("Nota Final %d - Muito Insuficiente", nota);
        break;
    
    case 6:
    case 7:
    case 8:
    case 9:       
        printf("Nota Final %d - Insuficiente", nota);
        break;
    
    case 10:
    case 11:
    case 12:
    case 13:       
        printf("Nota Final %d - Suficiente", nota);
        break;

    case 14:
    case 15:
    case 16:
    case 17:       
        printf("Nota Final %d - Bom", nota);
        break;
    
    case 18:
    case 19:      
        printf("Nota Final %d - Muito bom", nota);
        break;
    
    case 20:       
        printf("Nota Final %d - Excelente", nota);
        break;

    default:
        printf("Opção inválida. Tente novamente.");
        break;
    }

}
