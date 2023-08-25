#include <stdio.h>

int main() {
  int num;
  int *p;
  /** Causes Segmentation Fault: terminated by signal SIGSEGV (Address boundary
   * error) */
  printf("%d\n", *p);
  return 0;
}
