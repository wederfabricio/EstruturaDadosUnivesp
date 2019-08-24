#include <stdio.h>

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE ch;
} REGISTRO;

typedef struct tempRegistro{
   REGISTRO reg;
   struct tempRegistro* ant;
   struct tempRegistro* prox;
} ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
    PONT cabeca;
} LISTA;

/* Implementa��o de lista duplamente ligada com n� cabe�a */
void inicializarLista(LISTA* l){
   l->cabeca = (PONT) malloc(sizeof(ELEMENTO));
   l->cabeca->prox = NULL;
   l->cabeca->ant = NULL;
}

/* Implementa��o de lista duplamente ligada com n� cabe�a, circular */
void inicializarListaCircular(LISTA* l){
   l->cabeca = (PONT) malloc(sizeof(ELEMENTO));
   l->cabeca->prox = l->cabeca;
   l->cabeca->ant = l->cabeca;
}

int main () {
    return 0;
}
