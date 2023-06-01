#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int num;
    cout << "Insira um número para iniciar a contagem progressiva: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++){
        cout << " " << i << endl;
    }

    return 0;
}
