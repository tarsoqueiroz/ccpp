#include <stdio.h>

// Variaveis globais
int nNumGlobal = 10;

int fFuncao(int nParm1, int nParm2) {

  // Variaveis locais da funcao fFuncao()
  int nNumFuncao = 20;

  printf("*** Entrando na funcao fFuncao()\nnNumFuncao = %d\nnParm1 = %d\nnParm2 = %d\n\n", nNumFuncao, nParm1, nParm2);

  nParm1++;
  nParm2--;
  nNumFuncao += (nParm1 + nParm2);

  printf("*** Saindo da funcao fFuncao()\nnNumFuncao = %d\nnParm1 = %d\nnParm2 = %d\n\n", nNumFuncao, nParm1, nParm2);

  return nNumFuncao;
}

void main() {

  // Variaveis locais da funcao main()
  int nNumMain = 20;
  int nParametro1 = 0;
  int nParametro2 = nNumGlobal + 1;

  printf("*** Estou no programa main()\nnNumMain = %d\nnParametro1 = %d\nnParametro2 = %d\n\n", nNumMain, nParametro1, nParametro2);

  nParametro1++;
  nParametro2--;
  nNumMain += (nParametro1 + nParametro2);

  printf("*** Vou chamar a funcao fFuncao()\nnNumMain = %d\nnParametro1 = %d\nnParametro2 = %d\n\n", nNumMain, nParametro1, nParametro2);

  nNumMain = fFuncao(nParametro1, nParametro2);

  printf("*** Voltou da funcao fFuncao()\nnNumMain = %d\nnParametro1 = %d\nnParametro2 = %d\n\n", nNumMain, nParametro1, nParametro2);
}
