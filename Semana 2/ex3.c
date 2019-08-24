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


/* Buscar elemento pilha, do topo para a base, sem sentinela */
int buscarElementoPilha(PILHA* p, REGISTRO reg) {
    int i;
    for (i=p->topo;i>=0;i--) {
        if(p->A[i].chave == reg.chave) return i;
    }
    return -1;
}

/* Inicialização da PILHA (a PILHA jah esta criada e eh apontada
pelo endereco em l) */
	void inicializarPilha(PILHA* p){
	  p->topo = -1;
	} /* inicializarPILHA* /


/* Retornar o tamanho da pilha (numero de elementos) */
int tamanhoPilha(PILHA* p) {
  int tamanho = p->topo+1;
  return tamanho;
} /* tamanho */

/* Exibição da pilha seqüencial */
void exibirPilha(PILHA* p){
  printf("Pilha: \" ");
  int i;
  for (i=p->topo;i>=0;i--){
    printf("%i ", p->A[i].chave); // soh lembrando TIPOCHAVE = int
  }
  printf("\"\n");
} /* exibirPILHA* /


/* Retornar o tamanho em bytes da pilha. Neste caso, isto nao depende do numero
   de elementos que estao sendo usados.   */
int tamanhoEmBytesPilha(PILHA* p) {
  return sizeof(PILHA);
} /* tamanhoEmBytes */

/* Busca Pilha - retorna posicao do primeiro elemento da pilha (topo) */
int buscaPilha(PILHA* p){
  return p->topo;
} /* buscaPILHA* /

/* Destruição da PILHA */
void reinicializarPilha(PILHA* p) {
     p->topo = -1;
} /* destruirPILHA* /

/* inserirElementoPilha - insere elemento no fim da pilha   */
bool inserirElementoPilha(PILHA* p, REGISTRO reg){
     if (p->topo+1>= MAX) return false;
     p->topo = p->topo+1;
     p->A[p->topo] = reg;
     return true;
} /* inserirElementoPILHA* /

/* excluirElementoPilha - retorna e exclui 1o elemento da pilha
retorna false se nao houver elemento a ser retirado */
bool excluirElementoPilha(PILHA* p, REGISTRO* reg){
   if (p->topo == -1) return false;
   *reg = p->A[p->topo];
   p->topo = p->topo-1;
   return true;
} /* excluirElementoPILHA* /

/* retornarPrimeiroPilha
retorna a posicao do primeiro (topo) elemento da pilha e o valor de sua chave no
conteudo do endereco ch. Retorna -1 caso a pilha esteja vazia */
int retornarPrimeiroPilha(PILHA* p, TIPOCHAVE* ch){
    if (p->topo==-1)return -1;
    *ch = p->A[p->topo].chave;
    return p->topo;
}
