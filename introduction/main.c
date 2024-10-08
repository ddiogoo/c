#include <stdio.h>
#include "exercise1/exercise_1.c"
#include "exercise1/exercise_2.c"
#include "exercise1/exercise_3.c"
#include "exercise1/exercise_4.c"
#include "exercise1/exercise_5.c"
#include "exercise1/exercise_6.c"
#include "exercise1/exercise_7.c"
#include "exercise1/exercise_8.c"
#include "exercise1/exercise_9.c"

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
    printf("\tExercise *.5:\n");
    tempReverseConversion();
    printf("\tExercise *.6:\n");
    inputAndOutput();
    printf("\tExercise *.7:\n");
    outputEof();
    printf("\tExercise *.8:\n");
    countBlanksTabsAndNewlines();
    printf("\tExercise *.9:\n");
    copyInputToOutputAndReplaceMultipleBlanksWithSingleBlank();
    return 0;
}
