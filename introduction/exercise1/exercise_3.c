#include <stdio.h>

void temperatureConversion();

void temperatureConversion() {
  float fahr, celsius;
  float lower=0, upper=300, step=20;

  fahr = lower;
  printf("\t\t  C°  F°\n");
  printf("\t\t----------\n");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("\t\t%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
