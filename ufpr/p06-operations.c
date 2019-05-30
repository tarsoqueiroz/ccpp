#include <stdio.h>

#define _NUMERO_2   2
#define _NUMERO_3   3

void main() {

  int nResultado;
  int nValor;

  printf("Pos incremento\n");
  nValor = _NUMERO_2;
  printf("nValor.................................: %d\n", nValor);
  nResultado = nValor++;
  printf("nResultado.............................: %d\n", nResultado);
  printf("nValor.................................: %d\n\n", nValor);

  printf("Pre incremento\n");
  nValor = _NUMERO_2;
  printf("nValor.................................: %d\n", nValor);
  nResultado = ++nValor;
  printf("nResultado.............................: %d\n", nResultado);
  printf("nValor.................................: %d\n\n", nValor);

}
