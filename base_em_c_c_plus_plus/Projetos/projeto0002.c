#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <canio.h>

void main() {
    setlocale(LC_ALL, "");

    int nume;
    int num1, num2, num3, num4, num5;
    char opcao;
    int numComp, funcao;
    int auxiliar = 0;
    int escolha; 

    printf("Bem vindo à Calculadora Interativa\n");
    printf("Escolha uma opção:\n");
    printf("1 Calculadora\n");
    printf("2 Tabuada\n");
    printf("3 Par ou Ímpar\n");
    printf("4 Números Primos\n");
    printf("5 Sair\n");
    printf("> ");
    scanf("%d", &nume); 

    while (nume != 5) { 

        switch (nume) {

            //Inicia calculadora
            case 1:
                system("cls");
                printf("Calculadora\n");
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                printf("Que operação pretende fazer? [+ - x /]");
                scanf("%c", &opcao);

                switch (opcao) {
                    case '+':
                        printf("%d+%d=%d", num1, num2, num1 + num2);
                        break;
                    case '-':
                        printf("%d-%d=%d", num1, num2, num1 - num2);
                        break;
                    case 'x':
                        printf("%dx%d=%d", num1, num2, num1 * num2);
                        break;
                    case '/':
                        printf("%d/%d=%.2f", num1, num2, (float) num1 / num2);
                        break;
                    default:
                        printf("Erro, opção inválida.");
                        break;
                }
                break; 
            
            //Inicia Tabuada
            case 2:
                system("cls");
                printf("Digite um número para saber a tabuada: ");
                scanf("%d", &num3); 

                for (int cont = 1; cont <= 10; cont++) {
                    printf("%d x %d = %d\n", num3, cont, num3 * cont);
                }
                break;

            //Inicia jogo do par ou ímpar
            case 3:
                system("cls");
                printf("Escolha um número de 1 a 10: ");
                scanf("%d", &num4);
                printf("[1] Par\n");
                printf("[2] Impar\n");
                printf("> ");
                scanf("%d", &funcao);

                srand(time(NULL));
                numComp = rand() % 10 + 1;


 

                switch (funcao) {
                    case 1:
                        printf("O jogador escolheu %d e Par.\n", num4);
                        break;
                    case 2:
                        printf("O jogador escolheu %d e Impar.\n", num4);
                        break;
                    default:
                        printf("Erro, opção inválida!");
                        exit(0);
                        break;
                }

 

                printf("O computador escolheu %d.\n", numComp);

 

                if ((numComp + num4) % 2 == 0 && funcao == 1) {
                    printf("O jogador ganhou!");
                } else if ((numComp + num4) % 2 == 0 && funcao == 2) {
                    printf("O computador ganhou!");
                } else if ((numComp + num4) % 2 != 0 && funcao == 1) {
                    printf("O computador ganhou!");
                } else {
                    printf("O jogador ganhou!");
                }
                break;
 
            //Iniciar saber se um número é primo
            case 4:
                system("cls");
                printf("Introduza um número para saber se é primo ou não: ");
                scanf("%d", &num5); 

                for (int cont = 1; cont <= num5; cont++) {
                    if (num5 % cont == 0) {
                        auxiliar += 1;
                    }
                }
                if (auxiliar == 2) {
                    printf("O número %d é primo", num5);
                } else {
                    printf("O número %d não é primo.", num5);
                }
                break; 

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

        printf("\n");
        printf("Deseja voltar atrás?\n");
        printf("1 Sim\n");
        printf("2 Não, desejo sair\n");
        printf("> ");
        scanf("%d", &escolha);

        if (escolha == 1) {

        } else if (escolha == 2) {
            printf("Obrigado por usar a nossa calculadora!");
            exit(0);
            break;
        }
    }

}
