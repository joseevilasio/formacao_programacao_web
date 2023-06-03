#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <locale.h>

using namespace std;

void limparTela(){
    system("CLS");
}

void boasVindas(){
    //esta fun��o d� as boas vindas
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "        BEM-VINDO AO CALCULATIX              " << endl;
    cout << "                                                  " << endl;
    cout << " ------------------------------------------------ " << endl;
}
void boasVindas2(string utilizador){
    //esta fun��o d� as boas vindas com o nome do Utilizador
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "        BEM-VINDO AO CALCULATIX   " << utilizador << "           " << endl;
    cout << "                                                   " << endl;
    cout << " ------------------------------------------------ " << endl;
}
void despedida(string utilizador){
//esta fun��o d� as despedidas com o nome do Utilizador
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "                   ADEUS  " << utilizador << "                 " << endl;
    cout << "                              " << endl;
    cout << " ------------------------------------------------ " << endl;

}

void desejaContinuar(string utilizador){

    int opcaoDaFuncao;

    cout << "" << endl;
    cout << "-------------------------" << endl;
    cout << "O que deseja fazer agora?" << endl;
    cout << "1 Voltar ao menu principal" << endl;
    cout << "2 Sair da aplicação" << endl;
    cout << ">>>";
    cin >> opcaoDaFuncao;

        if (opcaoDaFuncao == 1) {
        } else if (opcaoDaFuncao == 2) {
            limparTela();
            despedida(utilizador);
            exit(0);            
        } else{
            cout << "Opção incorreta, voltando ao menu principal." << endl;
        }
}

void calculadora(){
    int a, b;
    char operacao;

    limparTela();
    cout << "----- Calculadora -----" << endl;
    cout << "Digite um número: ";
    cin >> a;
    cout << "Digite outro número: ";
    cin >> b;
    cout << "Que operação pretende fazer? [+ - x /]" << endl;
    cout << ">>>";
    cin >> operacao;

    switch (operacao) {
        case '+': cout << "" << a << " + " << b << " = " << a + b << endl; break;
        case '-': cout << "" << a << " - " << b << " = " << a - b << endl; break;
        case 'x': cout << "" << a << " x " << b << " = " << a * b << endl; break;
        case '/': cout << "" << a << " / " << b << " = " << float(a / b) << endl; break;
        default:  cout << "Opção Invalida" << endl; break;
    }    
}

void tabuada(){
    int numero;
    limparTela();
    cout << "----- Tabuada -----" << endl;
    cout << "Digite um número para saber a tabuada: ";
    cin >> numero;
    for (int cont = 1; cont <= 10; cont++) {
        cout << "" << numero << " x " << cont << " = " << numero * cont << endl;
    }
}

void imparOupar(){

    int numero;
    limparTela();
    cout << "----- É par ou é ímpar !? -----" << endl;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    int resto = (numero % 2);
    if(resto != 0){ cout << "O número " << numero << " é ímpar."; } else{ cout << "O número " << numero << " é par.";}
}

void primo(){

    limparTela();
    int numero;
    int auxiliar = 0;

    cout << "Introduza um número para saber se é primo ou não: ";
    cin >> numero;

    for (int cont = 1; cont <= numero; cont++) {
        if (numero % cont == 0) {
            auxiliar += 1;
        }
    }
    if (auxiliar == 2) {
        cout << "O número " << numero << " é primo";
    } else {
        cout << "O número " << numero << " não é primo.";
    }
}

int main() {
    setlocale(LC_ALL, "");

    boasVindas();
    string utilizador;
    cout << "Utilizador: ";
    getline(cin, utilizador);
    cout << " ";
    limparTela();
    boasVindas2(utilizador);

    int opcao;
    while (opcao != 5) {

    cout << "Escolha uma opção" << endl;
    cout << "1 Calculadora" << endl;
    cout << "2 Tabuada" << endl;
    cout << "3 Par ou Ímpar" << endl;
    cout << "4 Números Primos" << endl;
    cout << "5 Sair" << endl;
    cout << ">>>";
    cin >> opcao;

        switch (opcao) {
            case 1: limparTela(); calculadora(); desejaContinuar(utilizador); break;
            case 2: limparTela(); tabuada(); desejaContinuar(utilizador); break;
            case 3: limparTela(); imparOupar(); desejaContinuar(utilizador); break;
            case 4: limparTela(); primo(); desejaContinuar(utilizador); break;
            case 5: limparTela(); despedida(utilizador); break;
            default: cout << "A " << opcao << " é uma entrada incorreta! - Tente novamente." << endl; limparTela(); break;
        }        
    }
}
