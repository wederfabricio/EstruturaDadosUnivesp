#include <stdio.h>

void embaralhar(int* a, int* b, int c) {
   int temp = *a;
   *a = *b + c;
   c = *b;
   *b = temp;
}

int main() {
   int x = 10;
   int y = 20;
   int z = 35;
   embaralhar(&x,&y,z);
   printf("x: %i\n", x);
   printf("y: %i\n", y);
   printf("z: %i\n", z);
   return 0;
}
