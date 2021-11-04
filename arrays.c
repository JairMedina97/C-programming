#include <stdio.h>

    float avg(int* edades, int lim){ //int edades[] o int* edades
    int i;
    float acum = 0;
    for(i = 0; i<lim; i++){
        acum += edades[i];
    }
    return acum / lim;
}


int main(){
    int lim;

    printf("Cuantos elementos son ? ");
    scanf("%d", &lim);

    int i, edades[lim];
    for(i = 0; i<lim; i++){
        printf("\nIntroduce la edad [%d]: ", i+1);
        scanf("%d", &edades[i]);             
    }
    for(i = 0; i<lim; i++){
        printf("\nEdades [%d] = %d", i, edades[i]);
    }
    printf("\nEl promedio de la edad es %2.2f", avg(edades, lim));
    return 0;
}
