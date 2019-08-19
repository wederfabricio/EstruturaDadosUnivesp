#include <stdio.h>

/* Como não existe estrutura data na questão 1, criei um exemplo */

typedef struct {
    char *dia;
    char *mes;
    char *ano;
} DATA;

/* Assinatura da função imprimir */
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
