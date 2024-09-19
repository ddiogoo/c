#include <stdio.h>

void tempReverseConversion();

void tempReverseConversion() {
  float fahr, celsius;
  float lower=0, upper=300, step=20;

  fahr = upper;
  printf("\t\t  C°  F°\n");
  printf("\t\t----------\n");
  while(fahr >= lower) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("\t\t%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
}
