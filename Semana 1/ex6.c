#include <stdio.h>

#define MAX 5

typedef struct {
    int chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

#define true 1
#define false 0

typedef int bool;

/* Joga sempre o último elemento inserido em primeiro lugar */
void exibeLista(LISTA* l) {
    int i;

    for(i = 0; i < l->nroElem; i++) {
        printf("[%i] -----> CHAVE %i\n", i, l->A[i].chave);
    }
}

bool inserirNovo(LISTA* l, REGISTRO reg){
   if (l->nroElem >= MAX) return false;
   l->A[l->nroElem] = l->A[0];
   l->A[0] = reg;
   l->nroElem++;
   return true;
}

int main() {
    printf("Antes de inserir..... \n");

    LISTA l;
    l.nroElem = 0;


    REGISTRO r1;
    r1.chave = 10;
    REGISTRO r2;
    r2.chave = 20;
    REGISTRO r3;
    r3.chave = 30;
    REGISTRO r4;
    r4.chave = 40;

    inserirNovo(&l, r1);
    inserirNovo(&l, r2);
    inserirNovo(&l, r3);
    inserirNovo(&l, r4);

    printf("Numero de elementos: %i \n", l.nroElem);

    exibeLista(&l);

    return 0;
}
