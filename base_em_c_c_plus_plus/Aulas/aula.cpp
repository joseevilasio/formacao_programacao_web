#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    
    cout << "Olá, Mundo!" << endl;
    cout << "Olá, Turma!" << endl;


    int a = 15;

    cout << "A variavel A tem o valor de " << a << endl;

    int b;

    cout << "Digite um valor: " << endl;
    cin >> b;

    cout << "O valor digitado é: " << b << " e o valor de a continua: " << a << endl;

    return 0;
}
