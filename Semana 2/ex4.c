//Arquivo obtido da UNIVESP, adaptado para o problema em questão
/******************************************************************************
//     pilhaEstatica.c
// Este programa gerencia PILHAs implementadas em arranjos
   (implementacao estatica).
// As PILHAs gerenciadas podem ter um numero de no maximo MAX elementos.
// Não usaremos sentinela nesta estrutura.
******************************************************************************/
#include <stdio.h>
#define true 1
#define false 0
#define MAX 50

typedef int bool;

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
} REGISTRO;

typedef struct {
  int topo;
  REGISTRO A[MAX];
} PILHA;

/* Comentários sobre o exercício 4 */

/******************************************************************************
    Insere chaves, na sequência: 20, 10, 40 e por último chave 30.
    As inserções sempre acrescentam na última posição, então na ordem lida acima,
        os elementos estão contidos na pilha.
    Ao ser chamado exibirPilha, ele imprimirá do topo (fim) para o início,
        então será na ordem inversa.
******************************************************************************/

/* Exibição da pilha seqüencial */
void exibirPilha(PILHA* p){
  printf("Pilha: \" ");
  int i;
  for (i=p->topo;i>=0;i--){
    printf("%i ", p->A[i].chave); // soh lembrando TIPOCHAVE = int
  }
  printf("\"\n");
} /* exibirPILHA* /


/* inserirElementoPilha - insere elemento no fim da pilha   */
bool inserirElementoPilha(PILHA* p, REGISTRO reg){
     if (p->topo+1>= MAX) return false;
     p->topo = p->topo+1;
     p->A[p->topo] = reg;
     return true;
} /* inserirElementoPILHA* /
