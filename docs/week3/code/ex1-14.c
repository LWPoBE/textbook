#include <stdio.h>

int main() {
  int c, i, j;
  int nalph[26];
  for (i = 0; i < 26; i++) {
    nalph[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      nalph[c-'a']++;
    }
  }
  for (i = 0; i < 26; i++) {
    printf("%c\t", (i+'a'));
    for (j = 0; j < nalph[i]; j++) {
      printf("X");
    }
    printf(" (%d)\n", nalph[i]);
  }
}