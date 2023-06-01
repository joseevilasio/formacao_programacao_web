#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int nume;
    int num1, num2, num3, num4, num5;
    char opcao;
    int numComp, funcao;
    int auxiliar = 0;
    int escolha;

    while (nume != 5) {

    system("cls");
    printf("             Bem vindo � Calculadora Interativa\n");
    printf("-----------------------Realizado por:-----------------------\n");
    printf("Alexandre Barbosa, Hugo Magalh�es, Jos� Junior, Tiago Catulo\n");
    printf("------------------------------------------------------------\n");
    printf("Escolha uma op��o:\n");
    printf("1 Calculadora\n");
    printf("2 Tabuada\n");
    printf("3 Par ou �mpar\n");
    printf("4 N�meros Primos\n");
    printf("5 Sair\n");
    printf("> ");
    scanf("%d", &nume);

        switch (nume) {
            case 1:
                system("cls");
                printf("Calculadora\n");
                printf("Digite um n�mero: ");
                scanf("%d", &num1);
                printf("Digite outro n�mero: ");
                scanf("%d", &num2);
                printf("Que opera��o pretende fazer? [+ - x /]");
                scanf(" %c", &opcao);

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
                        printf("Erro, op��o inv�lida.");
                        break;
                }
                break;

            case 2:
                system("cls");
                printf("Digite um n�mero para saber a tabuada: ");
                scanf("%d", &num3);

                for (int cont = 1; cont <= 10; cont++) {
                    printf("%d x %d = %d\n", num3, cont, num3 * cont);
                }
                break;

            case 3:
                system("cls");
                printf("Escolha um n�mero de 1 a 10: ");
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
                        printf("Erro, op��o inv�lida!");
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

            case 4:
                system("cls");
                printf("Introduza um n�mero para saber se � primo ou n�o: ");
                scanf("%d", &num5);

                for (int cont = 1; cont <= num5; cont++) {
                    if (num5 % cont == 0) {
                        auxiliar += 1;
                    }
                }
                if (auxiliar == 2) {
                    printf("O n�mero %d � primo", num5);
                } else {
                    printf("O n�mero %d n�o � primo.", num5);
                }
                break;
            case 5:
                system("cls");
                printf("Obrigado por usar a nossa calculadora!\n");
                exit(0);
                break;
            default:
                system("cls");
                printf("Op��o inv�lida. Tente novamente.\n");
                break;

        }

        printf("\n");

        printf("\nDeseja voltar atr�s?\n");
        printf("1 Sim\n");
        printf("2 N�o, desejo sair\n");
        printf("> ");
        scanf("%d", &escolha);

        if (escolha == 1) {
        } else if (escolha == 2) {
            system("cls");
            printf("Obrigado por usar a nossa calculadora!\n");
            exit(0);
            break;
        }
    }
}
