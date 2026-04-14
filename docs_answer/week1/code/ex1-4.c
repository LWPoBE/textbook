#include <stdio.h>

float celsius_to_fahr(float celsius) {
  /* ここを実装する */
}

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  celsius = lower;

  while (celsius <= upper) {
    fahr = celsius_to_fahr(celsius);
    printf("%6.1f\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}