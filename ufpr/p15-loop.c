#include <stdio.h>

void main() {

  int nValores[5];
  int i;

  i = 0;
  do {
    nValores[i] = i * 10 + 10;
    i ++;
  } while (i < 5);

  i = 4;
  do {
    printf("nValores[%d]............................: %d\n", i, nValores[i]);
    i --;
  } while (i >= 0);
 
}
