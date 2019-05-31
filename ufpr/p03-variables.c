#include <stdio.h>

void main() {

  printf("*** Caracter ***\n");
  char          chCaracter;

  chCaracter = 'A';
  printf("Caracter = %c (%d) (0x%x)\n", chCaracter, chCaracter, chCaracter);
  chCaracter = 0x41;
  printf("Caracter = %c (%d) (0x%x)\n", chCaracter, chCaracter, chCaracter);
  chCaracter = 0x42;
  printf("Caracter = %c (%d) (0x%x)\n", chCaracter, chCaracter, chCaracter);
  chCaracter = 67;
  printf("Caracter = %c (%d) (0x%x)\n", chCaracter, chCaracter, chCaracter);

  printf("\n*** Inteiro ***\n");
  int nValorInt;

  nValorInt = 1;
  printf("Valor = %d\n", nValorInt);
  nValorInt = nValorInt - 1;
  printf("Valor = %d\n", nValorInt);
  nValorInt -= 1;
  printf("Valor = %d\n", nValorInt);
  nValorInt--;
  printf("Valor = %d\n", nValorInt);
  nValorInt = nValorInt + 1;
  printf("Valor = %d\n", nValorInt);
  nValorInt += 1;
  printf("Valor = %d\n", nValorInt);
  nValorInt++;
  printf("Valor = %d\n", nValorInt);

}
