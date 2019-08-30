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

/* Coment�rio: No la�o for � utilizado o n�mero de elementos como par�metro, para rodar o la�o para todos os
 elementos v�lidos.

 Para iniciar o valor de i com o �ltimo valor inserido, pega-se a posi��o do primeiro elemento, e soma com o
 n�mero de elementos v�lidos.

 Com: (f->inicio + f->nroElem) % MAX temos a nova posi��o para uma inser��o, ent�o
 Com : (f->inicio + f->nroElem - 1) % MAX temos a �ltima posi��o inserida

 O operador % serve para pegar o resto de uma divis�o. Por exemplo, se dividirmos 6 por 5, teremos
 que 1 x 5 = 5, ent�o o c�lculo na divis�o fica [6 - 5 = 1] e esta � a parte do nosso interesse, pois a nossa conta acaba
 a�. O resultado de 6 % 5 = 1;

 A cada itera��o do la�o � feito o c�lculo do novo i, corrigindo o seu valor com o % MAX para nunca pegar um elemento
 n�o v�lido e nem extrapolar a posi��o m�xima do array;

 */
void exibirFilaFim(FILA* f){
   printf("Fila: \" ");
   int i = (f->inicio + f->nroElem - 1) % MAX;
   int temp;

    for (temp = 0; temp < f->nroElem; temp++){
        printf("%i ", f->A[i].chave);
        i = (i - 1 + MAX) % MAX;
    }
    printf("\"\n");
}

int main () {return 0;}
