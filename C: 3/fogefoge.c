#include <stdio.h>
#include <stdlib.h>

#include "fogefoge.h"
#include "mapa.h"

MAPA m;

int acabou() {
    return 0;
}

void ache (int* x, int* y) {
    for (int i = 0; i < m.linhas; i++) {
        for (int j = 0; j < m.colunas; j++) {
            if (m.matriz[i][j] == '@') {
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
            m.matriz[x][y-1] = '@';
            m.matriz[x][y] = '.';
            break;
        case 'w':
            m.matriz[x-1][y] = '@';
            m.matriz[x][y] = '.';
            break;
        case 's':
            m.matriz[x+1][y] = '@';
            m.matriz[x][y] = '.';
            break;
        case 'd':
            m.matriz[x][y+1] = '@';
            m.matriz[x][y] = '.';
            break;
        default:
            break;
    }

}

int main() {
    lemapa(&m);

    do {
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while(!acabou());

    liberamapa(&m);    
}