#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
    printf("\t(c = getchar()) != EOF ... %d\n", c != EOF);
  }
  printf("\t(c = getchar()) != EOF ... %d\n", c != EOF);
}