#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BOMBA 'b'

void ache (int* x, int* y);
void move(char direcao);
int acabou();
void imprimemapa();
int ehdirecao(char direcao);
void explodepilula();