//Arquivo obtido da UNIVESP, adaptado para o problema em quest�o
/******************************************************************************
//     pilhaEstatica.c
// Este programa gerencia PILHAs implementadas em arranjos
   (implementacao estatica).
// As PILHAs gerenciadas podem ter um numero de no maximo MAX elementos.
// N�o usaremos sentinela nesta estrutura.
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

/* Coment�rios sobre o exerc�cio 4 */

/******************************************************************************
    Insere chaves, na sequ�ncia: 20, 10, 40 e por �ltimo chave 30.
    As inser��es sempre acrescentam na �ltima posi��o, ent�o na ordem lida acima,
        os elementos est�o contidos na pilha.
    Ao ser chamado exibirPilha, ele imprimir� do topo (fim) para o in�cio,
        ent�o ser� na ordem inversa.
******************************************************************************/

/* Exibi��o da pilha seq�encial */
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
