#include <stdio.h>
#include <stdlib.h>

#include "fogefoge.h"

// matriz 5 x 10
char** mapa;
int linhas;
int colunas;

void liberamapa() {
    for (int i = 0; i < linhas; i++) {
        free(mapa[i]);
    }
    free(mapa);
}

void alocamapa() {
    mapa = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++) {
        mapa[i] = malloc(sizeof(char) * (colunas+1));
    }
}

void lemapa() {
    FILE* f = fopen("mapa.txt", "r");
    if(f == 0) {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    alocamapa();

    fscanf(f, "%d %d", &linhas, &colunas);
    printf("linhas %d colunas %d\n", linhas, colunas);
    
    for (int i = 0; i < 5; i++) {
        fscanf(f, "%s", mapa[i]);
    }
    fclose(f);
}

int main() {
    lemapa();

    for (int i = 0; i < 5; i++) {
        printf("%s\n", mapa[i]);
    }

    liberamapa();    
}