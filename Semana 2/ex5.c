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
  REGISTRO A[MAX+1];
} PILHA;

 int buscarElementoPilha(PILHA* p, TIPOCHAVE ch){
   int i=0;
   while (i<=p->topo && p->A[i].chave != ch) i++;
   if (i<=p->topo) return i;
   else return -1;
}

 int buscarElementoPilhaSentinela(PILHA* p, TIPOCHAVE ch){
   int i=0;
   //Uso do sentinela, levanto em conta que a posição máxima suportada é a MAX+1
   p->A[p->topo+1].chave = ch;
   while (p->A[i].chave != ch) i++;
   if (i<=p->topo) return i;
   else return -1;
}

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
