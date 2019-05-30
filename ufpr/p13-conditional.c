#include <stdio.h>

void main() {

  int nA = 1;
  int nB = 2;
  int nC = 3;

  if        ((nA > nB) && (nA > nC) && (nB > nC)) {
    printf("nA > nB > nC\n");
  } else if ((nA > nC) && (nA > nB) && (nC > nB)) {
    printf("nA > nC > nB\n");
  } else if ((nC > nA) && (nC > nB) && (nA > nB)) {
    printf("nC > nA > nB\n");
  } else if ((nB > nA) && (nB > nC) && (nA > nC)) {
    printf("nB > nA > nC\n");
  } else if ((nB > nC) && (nB > nA) && (nC > nA)) {
    printf("nB > nC > nA\n");
  } else {
    printf("nC > nB > nA\n");
  }

}
