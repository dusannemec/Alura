#include <stdio.h>

int main() {
    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n\n");

    int numeroSecreto = 42;
    int tentativas = 1;
    int pontos = 1000;

    int chute;

    printf("%d é o número secreto. Não conta para ninguém!\n", numeroSecreto);


    while(1) {
        
        printf("Tentativa %d\n", tentativas);
        
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        
        if (chute < 0) {
            printf("Você não pode chutar números negativos\n");

            continue;
        }

        printf("\nSeu chute foi %d\n", chute);

        int acertou = chute == numeroSecreto; 
        int maior = chute > numeroSecreto;

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
            
            break;
        } 
        else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o númro secreto\n");
        }
        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas\n", tentativas);
}