#include <stdio.h>

void main() {

  int nA = 1;
  int nB = 2;
  int nC = 3;

  if (nA > nB) {
    if (nA > nC) {
      if (nB > nC) {
        printf("nA > nB > nC\n");
      } else {
        printf("nA > nC > nB\n");
      }
    } else {
      printf("nC > nA > nB\n");
    }
  } else {
    if (nB > nC) {
      if (nA > nC) {
        printf("nB > nA > nC\n");
      } else {
        printf("nB > nC > nA\n");
      }
    } else {
      printf("nC > nB > nA\n");
    }
  }

}
