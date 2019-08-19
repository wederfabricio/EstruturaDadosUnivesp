#include <stdio.h>
#include <malloc.h>

int main() {
   int x = 10;
   int y = 20;
   int z = 35;
   int* a = (int*) malloc(sizeof(int));
   int** b = &a;
   printf("Endereco de x: %p\n", &x);
   printf("Endereco de y: %p\n", &y);
   printf("Endereco de z: %p\n", &z);
   printf("Endereco de a: %p\n", &a);
   printf("Endereco de b: %p\n", &b);

   printf("Valor de x: %i\n", x);
   printf("Valor de y: %i\n", y);
   printf("Valor de z: %i\n", z);
   printf("Valor de a: %p\n", a);
   printf("Valor de b: %p\n", b);

   *b = &z;
   *a = 44;

   printf("Novo valor de x: %i\n", x);
   printf("Novo valor de y: %i\n", y);
   printf("Novo valor de z: %i\n", z);
   printf("Novo valor de a: %p\n", a);
   printf("Novo valor de b: %p\n", b);
   return 0;
}
