#include <stdio.h>

#define MAXLINE 1000

int readline(char s[], int max);
void copyline(char to[], char from[]);

int main() {
  int len, max;
  char line[MAXLINE], longest[MAXLINE];

  max = 0;
  while ((len = readline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copyline(longest, line);
    }
  }
  if (max > 0) {
    printf("%s (%d characters)\n", longest, max);
  }
  return 0;
}

int readline(char s[], int max) {
  int c, i;
  for (i = 0; i < (max - 1) &&
         (c = getchar()) != EOF &&
         c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

void copyline(char to[], char from[]) {
  int i;
  for(i = 0; (to[i] = from[i]) != '\0'; i++) { }
}