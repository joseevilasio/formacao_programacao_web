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
    //esta fun��o de as boas vindas
    cout << " ------------------------------------------------ " << endl;
    cout << "                                                  " << endl;
    cout << "        LOGIN CALCULATIX              " << endl;
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

void despedida(){
//esta fun��o d� as despedidas com o nome do Utilizador
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

int validarPasswordChar(char password[], char userPassword[], int tam){

    int quantValido = 0;

    for(int i = 0; i < tam; i++){
        if(password[i] == userPassword[i]){
            quantValido += 1;
        }
    }

    if(quantValido == tam){
        return 0;
    }
    return 1;
}

char mascararPassword(char password[], int tam){

    int i = 0;
    char c;

    cout << "Digite sua senha: ";

    while ((c = _getch()) != '\r') { // Lê o caractere sem exibi-lo na tela
        if (c == '\b' && i > 0) { // Verifica se foi pressionada a tecla de backspace
            cout << "\b \b"; // Apaga o caractere anterior da tela
            i--;
        } else if (c != '\b') { // Ignora caracteres de backspace
            password[i] = c;
            cout << '*'; // Exibe um asterisco no lugar do caractere digitado
            i++;
        }
    }

    int tam = sizeof(password) / sizeof(password[0]);

    return password[20], tam;
}

int login(string email, char password[]){

    int quantErros = 0;
    string userEmail;
    char userPassword[20];

    while(quantErros != 3){

        cout << "Email: ";
        cin >> userEmail;
        //cout << "Password: ";
        //cin >> userPassword;
        userPassword[20] = mascararPassword(userPassword);
        cout << "" << userPassword;
        cout << "" << password;

        if (userEmail == email && validarPasswordChar(password, userPassword, tam)){
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

char signin(string &nomeCompleto, string &email, char password[], int &tam){


    cout << "Digite seu nome: ";
    cin >> nomeCompleto;
    cout << "Digite seu email: ";
    cin >> email;
    password[20], tam = mascararPassword(password, tam);
    //cout << "Digite seu password: ";
    //cin >> password;

    cout << "" << endl;
    cout << "Cadastro realizado com sucesso!!!";

    return password[20], tam;
}

int main() {
    setlocale(LC_ALL, "");

    boasVindas();
    limparTela();
    //boasVindas2(utilizador);

    int opcao;
    string nomeCompleto, email;
    char password[20];
    int tam;

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


            case 2: limparTela(); signin(nomeCompleto, email, password, tam); time(); limparTela(); break;
            case 3: limparTela(); despedida(); break;
            default: cout << "A " << opcao << " é uma entrada incorreta! - Tente novamente." << endl; limparTela(); break;
        }
    }
}
