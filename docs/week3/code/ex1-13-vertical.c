#include <stdio.h>

#define IN  1
#define OUT 0
#define WORD_LEN_MAX 10

int main() {
  int c, i, j, nc, state, max_len;
  int nwordlen[WORD_LEN_MAX];
  for (i = 0; i < WORD_LEN_MAX; i++) {
    nwordlen[i] = 0;
  }
  state = OUT;
  nc = max_len = 0;
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
  if(nc > 0) { nwordlen[nc-1]++; }
  for(i = 0; i < WORD_LEN_MAX; i++) {
    if(max_len < nwordlen[i]) {
      max_len = nwordlen[i];
    }
  }
  for (i = max_len; i >= 0; i--) {
    for (j = 0; j < WORD_LEN_MAX; j++) {
      if(nwordlen[j] <= i) {
        printf("  ");
      } else {
        printf("X ");
      }
    }
    printf("\n");
  }
  for (i = 0; i < WORD_LEN_MAX; i++) {
    printf("%d ", i+1);    
  }
}