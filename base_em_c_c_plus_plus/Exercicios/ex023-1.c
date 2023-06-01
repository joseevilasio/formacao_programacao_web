#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int notaAlunoUm[5], notaAlunoDois[5], notaAlunoTres[5], somaAlunos[3];
    int alunos[3] = {1,2,3};    
    
    for (int cont = 0; cont < 3; cont++){
        printf("Insira as notas do %dº Aluno\n", cont + 1);
        for (int i = 0; i < 5; i++){
            printf("Digite as notas do %dº Aluno - %dº Nota: ", cont + 1, i + 1);
            scanf("%d", &notaAlunoUm[i]);
            somaAlunos[0] += notaAlunoUm[i];
        }
    }

    printf("-------------------------------------------\n\n");

    for (int i = 0; i < 3; i++){
        if (somaAlunos[i] / 5 >= 9.5){
            printf("A média do %dº Aluno é %d - Aprovado\n", i + 1, somaAlunos[i] / 5);
        } else if (somaAlunos[i] / 5 <= 8) {
            printf("A média do %dº Aluno é %d - Reprovado\n", i + 1, somaAlunos[i] / 5);
        } else {
            printf("A média do %dº Aluno é %d - Em Recuperação\n", i + 1, somaAlunos[i] / 5);
        }
    }   

}
