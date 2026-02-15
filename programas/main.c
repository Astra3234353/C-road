#include <stdio.h>

int main() {
    float tacos_precio;
    int tacos_num;

    printf("Cuantos tacos va a querer?: ");
    scanf("%d", &tacos_num);
    printf("A como la orden?: ");
    scanf("%f", &tacos_precio);

    float total = tacos_num * tacos_precio;
    printf("El coste sera de %.2f", total);

    return 0;
}