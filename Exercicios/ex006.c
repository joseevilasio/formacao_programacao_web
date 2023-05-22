#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Notas
    float a, b, c, d, e;

    printf("Insira a NOTA 1: ");
    scanf("%f", &a);
    printf("Insira a NOTA 2: ");
    scanf("%f", &b);
    printf("Insira a NOTA 3: ");
    scanf("%f", &c);
    printf("Insira a NOTA 4: ");
    scanf("%f", &d);
    printf("Insira a NOTA 5: ");
    scanf("%f", &e);

    float media = (a + b + c + d + e) / 5;

    printf("A média das NOTAS inseridas é %.2f", media);
}
