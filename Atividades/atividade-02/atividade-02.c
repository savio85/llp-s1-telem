#include <stdio.h>

int main() {
  int x;
  printf("Numeros interiros pares entre 1 e 50:\n");
  for (x = 2; x <= 50; x++){
    int rest = x % 2;
    if ( rest == 0);{
      printf("%d\n", x);
    }
  } 
  return 0;
}
