#include <stdio.h>

/* Como n�o existe estrutura data na quest�o 1, criei um exemplo */

typedef struct {
    char *dia;
    char *mes;
    char *ano;
} DATA;

/* Assinatura da fun��o imprimir */
void imprimir(DATA copia) {
    printf("%s/%s/%s", copia.dia, copia.mes, copia.ano);
}

int main() {
    DATA data;
    data.dia = "20";
    data.mes = "08";
    data.ano = "2019";

    imprimir(data);

    return 0;
}
