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

    fscanf(f, "%d %d", &linhas, &colunas);
    alocamapa();

    for (int i = 0; i < linhas; i++) {
        fscanf(f, "%s", mapa[i]);
    }
    fclose(f);
}

void imprimemapa() {
    for (int i = 0; i < linhas; i++) {
        printf("%s\n", mapa[i]);
    }
}

int acabou() {
    return 0;
}

void ache (int* x, int* y) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (mapa[i][j] == '@') {
                *x = i;
                *y = j;
                break;
            }
        }
    }
}

void move(char direcao) {
    int x;
    int y;

    ache(&x, &y);

    switch (direcao) {
        case 'a':
            mapa[x][y-1] = '@';
            mapa[x][y] = '.';
            break;
        case 'w':
            mapa[x-1][y] = '@';
            mapa[x][y] = '.';
            break;
        case 's':
            mapa[x+1][y] = '@';
            mapa[x][y] = '.';
            break;
        case 'd':
            mapa[x][y+1] = '@';
            mapa[x][y] = '.';
            break;
        default:
            break;
    }

}

int main() {
    lemapa();

    do {
        imprimemapa();

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while(!acabou());

    liberamapa();    
}