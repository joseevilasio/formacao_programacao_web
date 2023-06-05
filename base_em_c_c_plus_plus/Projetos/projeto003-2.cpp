#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

using namespace std;

void limparTela(){
    system("CLS");
}

void boasVindas(){
    //esta funcao de as boas vindas
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "        LOGIN CALCULATIX              " << endl;
    cout << "                                                  " << endl;
    cout << " ------------------------------------------------ " << endl;
    cout << " Criado por: Patricia Correia, Hugo Magalhães, José Junior" << endl;
    cout << " ------------------------------------------------ " << endl;
}

void boasVindas2(string utilizador){
    //esta funcao da as boas vindas com o nome do Utilizador
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "        BEM-VINDO AO CALCULATIX   " << utilizador << "           " << endl;
    cout << "                                                   " << endl;
    cout << " ------------------------------------------------ " << endl;
}

void despedida(){
//esta funcao da as despedidas com o nome do Utilizador
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "                   ADEUS                  " << endl;
    cout << "                              " << endl;
    cout << " ------------------------------------------------ " << endl;

}

void time(){
    for (int i = 0; i < 10000000; i++){
        cout << "";
    }
}

int login(string email, string password){

    int quantErros = 0;
    string userEmail, userPassword;

    while(quantErros != 3){

        cout << "Email: ";
        cin >> userEmail;
        cout << "Password: ";
        cin >> userPassword;       

        if (userEmail == email && userPassword == password){
                return 0;
                exit(0);
            } else{
                //Se password for inválido, diminuir quantidades de tentativas.
                quantErros += 1;
                cout << "Senha inválida ou Email inválido - Tente novamente [" << quantErros << "]" << endl;
            }
    }

    cout << "Usuário excedeu as quantidades de tentativas. 3 erros." << endl;
    return 1;
}

int signin(string &nomeCompleto, string &email, string &password){


    cout << "Digite seu nome: ";
    cin >> nomeCompleto;
    cout << "Digite seu email: ";
    cin >> email;    
    cout << "Digite seu password: ";
    cin >> password;

    cout << "" << endl;
    cout << "Cadastro realizado com sucesso!!!";

    return 0;
}

int main() {
    setlocale(LC_ALL, "");

    boasVindas();
    limparTela();   

    int opcao;
    string nomeCompleto, email, password;    

    while (opcao != 3) {

    cout << "" << endl;
    cout << "1 Login" << endl;
    cout << "2 Signin" << endl;
    cout << "3 Sair" << endl;
    cout << ">>>";
    cin >> opcao;

        switch (opcao) {
            case 1:
            limparTela();
            if (login(email, password) == 0){
                limparTela();
                boasVindas2(nomeCompleto);
            }
            exit(0);
            break;

            case 2: limparTela(); signin(nomeCompleto, email, password); time(); limparTela(); break;
            case 3: limparTela(); despedida(); break;
            default: cout << "A " << opcao << " é uma entrada incorreta! - Tente novamente." << endl; limparTela(); break;
        }
    }
}
