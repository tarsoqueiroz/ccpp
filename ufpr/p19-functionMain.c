#include <stdio.h>

#include "p19-functionSum.h"

void main(void) {

  int nNumero1;
  int nNumero2;
  int nResultadoDaSoma;

  nNumero1 = 1;
  nNumero2 = 5;

  nResultadoDaSoma = fSoma(nNumero1, nNumero2);

  printf("A soma de %d com %d resulta em %d.\n", nNumero1, nNumero2, nResultadoDaSoma);
  
}
