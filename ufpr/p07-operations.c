#include <stdio.h>

#define _NUMERO_2   2
#define _NUMERO_3   3

void main() {

  int nResultado;

  nResultado = _NUMERO_2 + _NUMERO_3;
  printf("Soma...................................: %d\n", nResultado);
  nResultado = _NUMERO_3 - _NUMERO_2;
  printf("Subtracao..............................: %d\n", nResultado);
  nResultado = _NUMERO_3 * _NUMERO_2;
  printf("Multiplicacao..........................: %d\n", nResultado);
  nResultado = _NUMERO_3 / _NUMERO_2;
  printf("Divisao................................: %d\n", nResultado);
  nResultado = _NUMERO_3 % _NUMERO_2;
  printf("Resto de divisao.......................: %d\n", nResultado);

}
