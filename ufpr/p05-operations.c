#include <stdio.h>

#define _NUMERO_2   2
#define _NUMERO_3   3

void main() {

  int nResultado;

  nResultado = _NUMERO_2 + _NUMERO_3;
  printf("Soma...................................: %d\n\n", nResultado);

  nResultado  = _NUMERO_2;
  printf("Atribuicao (2).........................: %d\n", nResultado);
  nResultado += _NUMERO_3;
  printf("Operador composto de atribuicao........: %d\n\n", nResultado);

  nResultado  = _NUMERO_3;
  printf("Atribuicao (3).........................: %d\n", nResultado);
  nResultado ++;
  printf("Operador incremento....................: %d\n\n", nResultado);

}
