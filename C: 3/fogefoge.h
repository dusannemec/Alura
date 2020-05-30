void liberamapa();
void lemapa();
void alocamapa();
void imprimemapa();
int acabou();
void ache (int* x, int* y);
void move(char direcao);

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};
