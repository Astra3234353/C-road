#include <stdio.h>

int main() {
  float calif;

  printf("Cual es tu calificacion?: ");
  scanf("%f", &calif);

  if (calif >= 6.0) {
    printf("Pasaste");
  } else {
    printf("No pasaste");
  }

  return 0;
}
