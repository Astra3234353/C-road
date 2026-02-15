#include <stdio.h>
#include <math.h>

int main() {
  const float PI = 3.14159;
  int radio;

  printf("Cual es el radio?: ");
  scanf("%d", &radio);

  float area = (pow(radio, 2)) * PI;

  printf("El area es: %.2f", area);

  return 0;
}