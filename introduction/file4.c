#include <stdio.h>

/**
 * 1.5 Character Input and Output
 */
void inputAndOutput();
void inputAndOutputExercise();

void inputAndOutput()
{
  int c;
  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}

void inputAndOutputExercise()
{
  printf("Value of getchar() != EOF: ");
  printf("%i\n", getchar() != EOF);

  printf("%i\n", EOF);
}
