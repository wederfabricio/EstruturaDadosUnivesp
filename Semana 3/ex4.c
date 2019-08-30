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

/* Comentário: No laço for é utilizado o número de elementos como parâmetro, para rodar o laço para todos os
 elementos válidos.

 Para iniciar o valor de i com o último valor inserido, pega-se a posição do primeiro elemento, e soma com o
 número de elementos válidos.

 Com: (f->inicio + f->nroElem) % MAX temos a nova posição para uma inserção, então
 Com : (f->inicio + f->nroElem - 1) % MAX temos a última posição inserida

 O operador % serve para pegar o resto de uma divisão. Por exemplo, se dividirmos 6 por 5, teremos
 que 1 x 5 = 5, então o cálculo na divisão fica [6 - 5 = 1] e esta é a parte do nosso interesse, pois a nossa conta acaba
 aí. O resultado de 6 % 5 = 1;

 A cada iteração do laço é feito o cálculo do novo i, corrigindo o seu valor com o % MAX para nunca pegar um elemento
 não válido e nem extrapolar a posição máxima do array;

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
