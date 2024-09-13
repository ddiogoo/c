/**
 * 1.4 Symbolic Constants
 */
void temperature3();

#define LOWER 0
#define UPPER 300
#define STEP 20

void temperature3()
{
  for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}