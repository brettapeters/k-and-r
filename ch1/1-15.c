#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert(int fahr);

main()
{
  printf("Fahrenheit Celsius\n");

  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%10d %7.1f\n", fahr, convert(fahr));
}

float convert(int fahr)
{
  return (5.0/9.0 * (fahr-32.0));
}