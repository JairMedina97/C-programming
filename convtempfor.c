#include <stdio.h>

int main() {
  float C;
  int F, lower = 0, upper = 120, step = 10;

  for (F = lower; F <= upper; F += step) {
    C = (5 / 9.0) * (F - 32);
    printf("%d Fahr is %.2f Celsius\n", F, C);
  }
  return 0;
}