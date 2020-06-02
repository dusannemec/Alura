#include <stdio.h>

int main() {
    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n\n");

    int numeroSecreto = 42;
    int chute;

    printf("%d é o número secreto. Não conta para ninguém!\n", numeroSecreto);

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("\nSeu chute foi %d\n", chute);
    printf("Número secredo: %d\n", numeroSecreto);

}