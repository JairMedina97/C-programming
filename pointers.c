# include <stdio.h>
// Trabajar en referencias de funciones
void jugar(int* n){
    int y = *n; // Recuperar el valor de ese puntero
    y = (y + 2);
    *n = y // Cambio del valor de la celda del nuevo calculo
    printf("%d\n", y);
}

// Direcciones de memoria
int main () {
    int x = 1;
    int* dirX = &x;

    float y = 0.5;
    float* dirY = &y;

    printf("x = %d\n", x);
    printf("Direccion de memoria de x = %d\n", &x); //puede ser %u p %d
    printf("Puntero dirX = %u\n", dirX);
    printf("Puntero dirY = %u\n", dirY);

    printf("\n\n");
    int t = 10;
    jugar(&t);
    printf("%d\n", x);

    return 0;
}
