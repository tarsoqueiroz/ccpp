#include <stdio.h>

void main() {

  int nValores[5];
  int i;

  i = 0;
  while (i < 5) {
    nValores[i] = i * 10 + 10;
    i ++;
  }

  i = 4;
  while (i >= 0) {
    printf("nValores[%d]............................: %d\n", i, nValores[i]);
    i --;
  }
 
}
