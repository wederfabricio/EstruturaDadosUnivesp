#include <stdio.h>
#include <malloc.h>
typedef int TIPOCHAVE;
typedef struct {
TIPOCHAVE chave;
// outros campos...
} REGISTRO;

typedef struct aux {
REGISTRO reg;
struct aux* prox;
} ELEMENTO;
typedef ELEMENTO* PONT;
typedef struct {
PONT topo;
} PILHA;


PONT buscarElementoPilha(PILHA* p, TIPOCHAVE ch) {
    PONT end = p->topo;
    while(end != NULL) {
        if(end->reg.chave == ch) return end;
        end = end->prox;
    }

    return NULL;
}

int main() {return 0;}
