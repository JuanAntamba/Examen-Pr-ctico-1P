
#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
     //definir primeras variables , se cambio a double

    printf("Ingrese un valor para n: ");// se pide al usuario que ingrese el numero n y se leearan 
    scanf("%d", &n);

    if (n < 1) {
        printf("El valor de n debe ser mayor o igual a 1.\n"); // Se crea un if para la restrccion de i
    } else {
        for (int i = 1; i <= n; i++) {  // estructura for para que se repita la operacion requerida, tomando en cuanta n veces
            suma += 1.0 / (double)(1 << i);  // Sumar 1/2 elevado a i a la suma, se cambio a double por el tamaño de los decimales
        }
    }
}


