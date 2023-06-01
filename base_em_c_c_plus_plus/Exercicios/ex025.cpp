#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
using namespace std;

int main(){
    setlocale(LC_ALL, "");

    //Notas
    float a, b, c, d, e;

    cout << "Insira a NOTA 1: " << endl;
    cin >> a;
    cout << "Insira a NOTA 2: " << endl;
    cin >> b;
    cout << "Insira a NOTA 3: " << endl;
    cin >> c;
    cout << "Insira a NOTA 4: " << endl;
    cin >> d;
    cout << "Insira a NOTA 5: " << endl;
    cin >> e;

    float media = (a + b + c + d + e) / 5;

    if(media >= 9.5){
        cout << "Passou" << endl;
    } else if(media > 8 && media < 9.5){
        cout << "Recuperação" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
