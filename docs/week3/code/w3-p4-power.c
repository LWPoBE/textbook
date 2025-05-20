#include <stdio.h>

/* function prototype of "power" function */
int power(int base, int n);

/* main function */
int main() {
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return 0;
}

/* power function: calculate "n"th-power of "base" */
int power(int base, int n) {
  int p;
  for (p = 1; n > 0; n--) {
    p = p * base;
  }
  return p;
}