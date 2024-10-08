#include <stdio.h>

void countBlanksTabsAndNewlines();

void countBlanksTabsAndNewlines() {
  int c, blanks = 0, tabs = 0, newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == '\n') {
      ++newlines;
    }
  }

  printf("Blanks: %i\nTabs: %i\nNewlines: %i\n", blanks, tabs, newlines);
}
