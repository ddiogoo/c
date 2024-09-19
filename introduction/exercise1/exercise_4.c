#include <stdio.h>

void temperature();

void temperature() {
  float fahrenheit;

  for(float celsius = 0; celsius < 300.0; celsius+=1.0) {
    fahrenheit = (celsius * (9.0/5.0)) + 32.0;
    printf("\t\tcelsius: %3.0f - fahrenheit: %3.2f\n", celsius, fahrenheit);
  }
}