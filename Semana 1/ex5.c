#include <stdio.h>

/* Estrutura DATA */
typedef struct
{
   int dia;
   int mes;
   int ano;
} DATA;

/* Assinatura da função atualizar */
void atualizar(DATA* pontData, int dia, int mes, int ano) {
    pontData->dia = dia;
    pontData->mes = mes;
    pontData->ano = ano;
}

int main() {
    //TO DO: Criar uma rotina que exibe o antes e depois;
    return 0;
}
