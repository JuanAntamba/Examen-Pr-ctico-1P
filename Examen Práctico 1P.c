#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
     //definir primeras variables , se cambio a double

    printf("Ingrese un valor para n: ");// se pide al usuario que ingrese el numero n y se leearan 
    scanf("%d", &n);

    if (n < 1) {
        printf("El valor de n debe ser mayor o igual a 1.\n"); // Se crea un if para la restrccion de i
    }
}

