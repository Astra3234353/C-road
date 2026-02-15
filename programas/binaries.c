#include <stdio.h>

int main() {
  // 011
  int personaje = 0;

  int veneno = 1;
  int volar = 2;
  int invisibilad = 4;

  personaje = personaje | volar;
  // Aqui le damos al personaje la habilidad volar 010

  personaje = personaje | veneno;
  // Aqui le damos al personaje veneno (+ acomulado volar) 011

  personaje = personaje | ~personaje; // 100011 | 011100 = 111111
  // Aqui activamos todo, insdependiente que sea, (recuerda que activas 32 bits)

  personaje = personaje & ~personaje; // 111 | 000 = 000
  // Aqui desactivamos/limpiamos todo, independiente que sea



  // PARTE 2: OPERADOR ~NOT
  personaje = personaje | volar; // 000 => 010

  personaje = personaje | invisibilad; // 010 => 110

  personaje = personaje & ~volar; // 110 & 101 = 100 
  // Con eso, desactivamos solo lo que activamos/
  

  // personaje = personaje | ~volar; // 101 | 110 = 111
   // Ni lo pienses



   
  // PARTE 3: OPERADOR XOR: Si son diferentes da 1, demas 0



  printf("El poder final es %d", personaje);
  return 0;
}