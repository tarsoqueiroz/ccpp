#include <stdio.h>

void main() {

  int nValores[5];
  int i;

  for (i = 0; i < 5; i++) {
    nValores[i] = i * 10 + 10;
  }

  for (i = 4; i >= 0; i--) {
    printf("nValores[%d]............................: %d\n", i, nValores[i]);
  }
 
}
