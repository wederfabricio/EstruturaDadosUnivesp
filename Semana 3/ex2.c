#include <stdio.h>
#define MAX 50
#define true 1
#define false 0
typedef int bool;
typedef int TIPOCHAVE;

typedef struct {
TIPOCHAVE chave;
} REGISTRO;
typedef struct {
REGISTRO A[MAX];
int inicio;
int nroElem;
} FILA;

bool minMax(FILA* f, REGISTRO* min, REGISTRO* max) {
  if(f->nroElem == 0) return false;

  int i = f->inicio;

  min = &f->A[i];
  max = &f->A[i];

  int temp;

  for (temp = 0; temp < f->nroElem; temp++) {
    if(f->A[i].chave > max->chave) max = &f->A[i];
    if(f->A[i].chave < min->chave) min = &f->A[i];

    i = (i + 1) % MAX;
  }

  return true;
}

int main () {return 0;}
