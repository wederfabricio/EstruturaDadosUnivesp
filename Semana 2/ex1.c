#include <stdio.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE ch;
} REGISTRO;

typedef struct tempRegistro{
   REGISTRO reg;
   /* Basta adicionar essa linha para a estrutura elemento fazer referencia ao anterior, al�m do pr�ximo */
   struct tempRegistro* ant;
   struct tempRegistro* prox;
} ELEMENTO;

int main () {
    return 0;
}
