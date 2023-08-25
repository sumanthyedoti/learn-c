#include <stdio.h>

int main() {
  int num = 10;
  int *ptr = &num;

  /** derefer the pointer for the value at the memory it holds */
  printf("%d\n", *ptr);

  /** change num value via ptr */
  *ptr = 100;
  printf("%d\n", num);
  return 0;
}
