#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float altura, peso;

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);
   

    if(imc < 18.5){
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > BAIXO PESO <", altura, peso, imc);
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > PESO NORMAL <", altura, peso, imc);
    } else if(imc >= 25 && imc <= 29.9){
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > EXCESSO DE PESO <", altura, peso, imc);
    } else if(imc >= 30 && imc <= 34.9){
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > OBESIDADE GRAU I <", altura, peso, imc);
    } else if(imc >= 35 && imc <= 39.9){
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > OBESIDADE GRAU II <", altura, peso, imc);
    } else{
        printf("Alt: %.2f | Peso: %.2f - Seu IMC é %.2f > OBESIDADE MÓRBIDA <", altura, peso, imc);
    }

}
