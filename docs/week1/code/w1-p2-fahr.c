#include <stdio.h>

int main() {
  int fahr, celsius; /* 変数の定義 */
  int lower, upper, step;

  lower = 0; /* 数値の代入 */
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}