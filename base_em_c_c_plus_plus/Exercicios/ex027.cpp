#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int notas[5];
    int tam = sizeof(notas) / sizeof(notas[0]);
    int somaNota = 0, auxMaior, auxMenor;
    float tamPercentagem = 0;
    
    for (int i = 0; i < tam; i++){

        cout << "Nota do Juíz " << i + 1 << " : ";
        cin >> notas[i];
        somaNota += notas[i];

        if (i == 0){
            auxMaior = notas[i];
            auxMenor = notas[i];

        } else{

            if (notas[i] > auxMaior){
                auxMaior = notas[i];

            } if (notas[i] < auxMenor){
                auxMenor = notas[i];
            }
        }

        if (notas[i] >= 8){      
            tamPercentagem += 1;
        }       

    }

    float percentagem = (tamPercentagem / tam);

    cout << "1. A média obtida pelo atleta: " << somaNota / tam << endl;
    cout << "2. A pior nota foi " << auxMenor << " e a maior nota foi " << auxMaior << endl;
    cout << "3. A percentagem de pontuações iguais ou acima de 8 é igual a " << percentagem * 100 << "%." << endl;
    cout << "4. A maior nota foram atribuidas por: ";

    for (int i = 0; i < tam; i++){

        if (notas[i] == auxMaior){         
            cout << "Juíz " << i + 1 << " ";
        }

    }

    return 0;
}
