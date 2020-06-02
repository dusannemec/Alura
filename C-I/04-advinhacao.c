#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // imprime cabeçalho do jogo
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |\" \"  |  |_|  |  \" \"|                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n\n");


    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int tentativas = 1;
    int acertou = 0;
    double pontos = 1000;

    int chute;
    
    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numeroTentativas;
    switch (numeroTentativas) {
        case 1:
            numeroTentativas = 20;
            break;
        case 2:
            numeroTentativas = 15;
            break;
        default:
            numeroTentativas = 6;
            break;
    }

    printf("%d é o número secreto. Não conta para ninguém!\n", numeroSecreto);


    for (int i = 0; i < numeroTentativas; i++) {
        
        printf("Tentativa %d\n", tentativas);
        
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        
        if (chute < 0) {
            printf("Você não pode chutar números negativos\n");

            continue;
        }

        printf("\nSeu chute foi %d\n", chute);

        acertou = chute == numeroSecreto; 
        int maior = chute > numeroSecreto;

        if (acertou) {
            break;
        } 
        else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o númro secreto\n");
        }
        tentativas++;
        
        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de jogo!\n");
    
    if (acertou) {
         printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");
        printf("Você ganhou!\n");
        printf("Você acertou %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n\n", pontos);
    } else {
        printf("Você perdeu! Tente de novo\n\n");
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
    }
}