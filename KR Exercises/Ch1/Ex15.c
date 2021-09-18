// KR Exercise 1.5
// Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0
#include <stdio.h>
int main(){
    double celsius;
    printf("Celsius  Fahr \n");
    for(celsius = 300; celsius>=0; celsius= celsius-20){
    printf("%3.1f\t%6.1f\n",celsius, (1.8*celsius+32));
    }
    return 0;
}
