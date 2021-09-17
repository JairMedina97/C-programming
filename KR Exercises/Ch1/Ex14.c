// KR Exercise 1.3
// Write a program to print the corresponding Celsius to Fahrenheit table.
#include <stdio.h>
main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  printf("Celsius to Fahrenheit\n");
  while(celsius <= upper){
  fahr = (1.8*celsius+32.0) ;
  printf("%3.0f \t %6.1f\n", celsius, fahr);
  celsius = celsius + step;
  }
  return 0;
}
