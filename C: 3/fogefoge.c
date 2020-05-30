#include <stdio.h>
#include <stdlib.h>

#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

int acabou() {
    return 0;
}

void move(char direcao) {

    switch (direcao) {
        case 'a':
            m.matriz[heroi.x][heroi.y-1] = '@';
            m.matriz[heroi.x][heroi.y] = '.';
            heroi.y--;
            break;
        case 'w':
            m.matriz[heroi.x-1][heroi.y] = '@';
            m.matriz[heroi.x][heroi.y] = '.';
            heroi.x--;
            break;
        case 's':
            m.matriz[heroi.x+1][heroi.y] = '@';
            m.matriz[heroi.x][heroi.y] = '.';
            heroi.x++;
            break;
        case 'd':
            m.matriz[heroi.x][heroi.y+1] = '@';
            m.matriz[heroi.x][heroi.y] = '.';
            heroi.y++;
            break;
        default:
            break;
    }

}

int main() {
    lemapa(&m);
    encontramapa(&m, &heroi, '@');

    do {
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while(!acabou());

    liberamapa(&m);    
}