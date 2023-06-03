#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int solicitanotas(int notas[], int tam){
    
    for (int i = 0; i < tam; i++){
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
    }
    return notas[5];
}

int maiorvalor(int notas[], int tam){
    int auxMaior;
    for (int i = 0; i < tam; i++){

        if (i == 0){
            auxMaior = notas[i];            

        } else{

            if (notas[i] > auxMaior){
                auxMaior = notas[i];
        }              
    }
    }
    return auxMaior;
}

int menorvalor(int notas[], int tam){

    int auxMenor;
    for (int i = 0; i < tam; i++){
        if (i == 0){
            auxMenor = notas[i];
        } else{
            if (notas[i] < auxMenor){
                auxMenor = notas[i];
        }
    }
    }
    return auxMenor;
}

float mediavalor(int notas[], int tam){

    int somaNota = 0;

    for (int i = 0; i < tam; i++){
        somaNota += notas[i];
    }

    float media = float(somaNota / tam);

    return media;
}

void validarmedia(float media){
    if(media >= 9.5){
        cout << "Passou" << endl;
    } else if(media > 8 && media < 9.5){
        cout << "Recuperação" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
}


int main(){
    setlocale(LC_ALL, "");

    int notas[5];
    int tam = sizeof(notas) / sizeof(notas[0]);
    
    solicitanotas(notas, tam);

    for (int i = 0; i < 5; i++){
        cout << "Nota " << notas[i] << ": ";
        
    }

    cout << "A maior nota é " << maiorvalor(notas, tam) << "" << endl;
    cout << "A menor nota é " << menorvalor(notas, tam) << "" << endl;
    cout << "A média das notas é " << mediavalor(notas, tam) << "" << endl;
    cout << "O aluno está ";
    validarmedia(mediavalor(notas, tam));

    return 0;
}
