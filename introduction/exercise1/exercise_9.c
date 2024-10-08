#include <stdio.h>

void copyInputToOutputAndReplaceMultipleBlanksWithSingleBlank();

void copyInputToOutputAndReplaceMultipleBlanksWithSingleBlank() {
  int c, lastChar = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && lastChar == ' ') {
      continue;
    }

    putchar(c);
    lastChar = c;
  }
}
