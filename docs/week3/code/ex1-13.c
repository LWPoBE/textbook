#include <stdio.h>

#define IN  1
#define OUT 0
#define WORD_LEN_MAX 10

int main() {
  int c, i, j, nc, state;
  int nwordlen[WORD_LEN_MAX];
  for (i = 0; i < WORD_LEN_MAX; i++) {
    nwordlen[i] = 0;
  }
  state = OUT;
  nc = 0;
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if(nc > 0) {
        nwordlen[nc-1]++;
      }
      nc = 0;
    } else {
      if(state == OUT) { state = IN; }
      nc++;
    }
  }
  if(nc > 0) {
    nwordlen[nc-1]++;
  }
  for (i = 0; i < WORD_LEN_MAX; i++) {
    printf("%d\t", i+1);
    for (j = 0; j < nwordlen[i]; j++) {
      printf("X");
    }
    printf(" (%d)\n", nwordlen[i]);
  }
}