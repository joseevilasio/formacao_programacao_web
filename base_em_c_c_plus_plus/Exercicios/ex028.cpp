/*
Crie um programa que receba as 5 notas dos
5 exercícios de 3 alunos. De seguida
imprima no ecrã:
1. A maior e menor nota;
2. A média de cada aluno e a média por exercício;
3. O melhor aluno;
4. O pior aluno.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int notasExercicos[3][5];

    cout << "-- Inserir notas dos exercicios --" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Aluno " << i + 1 << endl;

        for (int j = 0; j < 5; j++){
            cout << "Inserir nota " << j + 1 << ":";
            cin >> notasExercicos[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        cout << "Aluno " << i + 1 << "- Notas: " << endl;

        for (int j = 0; j < 5; j++){
            cout << "" << j + 1 << "|";
        }
    }


    return 0;
}
