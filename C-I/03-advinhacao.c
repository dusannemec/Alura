#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int tentativas = 1;
    int acertou = 0;
    double pontos = 1000;

    int chute;

    printf("%d é o número secreto. Não conta para ninguém!\n", numeroSecreto);


    while(!acertou) {
        
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
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
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
    printf("Você acertou em %d tentativas\n", tentativas);
    printf("Total de pontos: %.2f\n", pontos);
}