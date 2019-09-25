// Shows how bit limitations affect number of decimal places stored
#include <stdio.h>

int main(void) {
  printf("%.55f\n", 1.0 / 10.0);
}
