#include <stdio.h>
#include "exercise1/exercise_1.c"
#include "exercise1/exercise_2.c"
#include "exercise1/exercise_3.c"
#include "exercise1/exercise_4.c"

int main()
{
    printf("Exercise 1:\n");
    printf("\tExercise *.1:\n");
    helloWorld();
    printf("\tExercise *.2:\n");
    character();
    printf("\tExercise *.3\n");
    temperatureConversion();
    printf("\tExercise *.4:\n");
    temperature();
    return 0;
}
