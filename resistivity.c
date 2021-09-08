// Code that calculates resistivity in function of the length in meters for my electricity and magnetism class 
// Rho value corresponds to nickel chromium alloy wire
#include <stdio.h>
int main(){
float i;
double rho = 0.00000100, L = 20.0, r = 0.00025, R, twenty;
double area = 3.14*r*r;
for(i = 0.1; i <= 1.1; i = i + 0.1){
    R = rho * (i/area);
    printf("Longitud(m) Resistencia (ohm)  \n");
    printf("%2.1f         %6.4f \n", i,R);
}
    twenty = rho * (L/area);
    printf("Resistencia con 20 m de longitud %6.4f ohm \n", twenty);
    return 0;
}
