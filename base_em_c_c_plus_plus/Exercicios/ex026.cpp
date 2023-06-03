#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    
    int num[20];
    int tam = sizeof(num) / sizeof(num[0]);
    int auxMaior, auxMenor, posicaoMaior, posicaoMenor;
    
    for(int i = 0; i < tam; i++){

        cout << "Insira o " << i + 1 << "º número: ";
        cin >> num[i];
    }

    for (int i = 0; i < tam; i++){

        if (i == 0){
            auxMaior = num[i];
            auxMenor = num[i];
            posicaoMaior = i;
            posicaoMenor = i;

        } else{

            if (num[i] > auxMaior){
                auxMaior = num[i];
                posicaoMaior = i + 1;

            } if (num[i] < auxMenor){
                auxMenor = num[i];
                posicaoMenor = i + 1;
            }
        }
              
    }

    for (int i = 0; i < tam; i++){
        
        //cout << "[" << i + 1 << "]" << endl;
        cout << num[i] << " ";
    }

    cout << endl;
    cout << "O maior número é " << auxMaior << " na posição " << posicaoMaior << endl;
    cout << "O menor número é " << auxMenor << " na posição " << posicaoMenor << endl;


    return 0;
}
