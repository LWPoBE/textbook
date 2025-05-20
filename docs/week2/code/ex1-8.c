#include <stdio.h>

int main() {
  int c, ns, nt, nnl;

  ns = nt = nnl = 0;
  while((c = getchar()) != EOF) {
    if(c == ' '){
      ns++;
    } else if(c == '\t'){
      nt++;
    } else if(c == '\n'){
      nnl++;
    }
  }
  printf("space: %d, tab: %d, line-break: %d\n", ns, nt, nnl);
}