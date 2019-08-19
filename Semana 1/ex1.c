#include <stdio.h>

int main() {
   char a = 'B';
   int x = 20;

   /* Aten��o!!! nesse caso, a impress�o ser� 2, porque x � um inteiro,
    * e o Compilador trunca as casas decimais.
    * Pode ser corrigido como no exemplo da letra z, onde � multiplicado "1.0"
    * ou dessa forma abaixo comentada:
   */

   //float y = (float) x/8;
   float y = x/8;
   float z = 1.0*x/8;
   printf("a: %c\n", a);
   printf("x: %i\n", x);
   printf("y: %f\n", y);
   printf("z: %f\n", z);
   return 0;
}
