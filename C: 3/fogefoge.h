void liberamapa();
void lemapa();
void alocamapa();

void ache (int* x, int* y);
void move(char direcao);
int acabou();
void imprimemapa();

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;
