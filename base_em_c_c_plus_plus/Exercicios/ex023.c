#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int notaAlunoUm[5], notaAlunoDois[5], notaAlunoTres[5];
    int somaAlunoUm = 0, somaAlunoDois = 0, somaAlunoTres = 0;   
    
    printf("Insira as notas do Primeiro Aluno\n");
    for (int i = 0; i < 5; i++){
        printf("Digite as notas do Primeiro Aluno - %dº Nota: ", i + 1);
        scanf("%d", &notaAlunoUm[i]);
        somaAlunoUm += notaAlunoUm[i];
    }

    printf("Insira as notas do Segundo Aluno\n");
    for (int i = 0; i < 5; i++){
        printf("Digite as notas do Segundo Aluno - %dº Nota: ", i + 1);
        scanf("%d", &notaAlunoDois[i]);
        somaAlunoDois += notaAlunoDois[i];
    }
    printf("Insira as notas do Terceiro Aluno\n");
    for (int i = 0; i < 5; i++){
        printf("Digite as notas do Terceiro Aluno - %dº Nota: ", i + 1);
        scanf("%d", &notaAlunoTres[i]);
        somaAlunoTres += notaAlunoTres[i];
    }

    printf("-------------------------------------------\n\n");

    if (somaAlunoUm / 5 >= 9.5){
        printf("A média do Primeiro Aluno é %d - Aprovado\n", somaAlunoUm / 5);
    } else if (somaAlunoUm / 5 <= 8) {
        printf("A média do Primeiro Aluno é %d - Reprovado\n", somaAlunoUm / 5);
    } else {
        printf("A média do Primeiro Aluno é %d - Em Recuperação\n", somaAlunoUm / 5);
    }

    if (somaAlunoDois / 5 >= 9.5){
        printf("A média do Segundo Aluno é %d - Aprovado\n", somaAlunoDois / 5);
    } else if (somaAlunoDois / 5 <= 8) {
        printf("A média do Segundo Aluno é %d - Reprovado\n", somaAlunoDois / 5);
    } else {
        printf("A média do Segundo Aluno é %d - Em Recuperação\n", somaAlunoDois / 5);
    }

    if (somaAlunoTres / 5 >= 9.5){
        printf("A média do Terceiro Aluno é %d - Aprovado\n", somaAlunoTres / 5);
    } else if (somaAlunoTres / 5 <= 8) {
        printf("A média do Terceiro Aluno é %d - Reprovado\n", somaAlunoTres / 5);
    } else {
        printf("A média do Terceiro Aluno é %d - Em Recuperação\n", somaAlunoTres / 5);
    }

    

} 
