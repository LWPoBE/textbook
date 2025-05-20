#include <stdio.h>

int main() {
  int c;
  c = '0';
  printf("0 = %d (%c)\n", c, c);
  c = 'a';
  printf("a = %d (%c)\n", c, c);
  printf("b = %d (%c)\n", 'b', 'b');

  printf("---\n");

  c = '8';
  printf("c = %d (%c)\n", c, c);
  printf("'0' = %d (%c)\n", '0', '0');
  printf("c - '0' = %d - %d = %d\n", c, '0', (c - '0'));
  return 0;
}
