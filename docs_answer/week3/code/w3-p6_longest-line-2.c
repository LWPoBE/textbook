#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int readline(void);
void copyline(void);

int main() {
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = readline()) > 0) {
    if (len > max) {
      max = len;
      copyline();
    }
  }
  if (max > 0) {
    printf("%s (%d characters)\n", longest, max);
  }
  return 0;
}

int readline(void) {
  int c, i;
  extern char line[];
  for (i = 0; i < (MAXLINE - 1) &&
         (c = getchar()) != EOF &&
         c != '\n'; i++) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copyline(void) {
  int i;
  extern char line[], longest[];
  for(i = 0; (longest[i] = line[i]) != '\0'; i++) { }
}