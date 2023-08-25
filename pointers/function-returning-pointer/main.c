#include <stdio.h>
#include <stdlib.h>

int *add1(int, int);
int *add2(int, int);
void sayHello();

int main() {
  int a = 10;
  int b = 20;
  int *c = add1(a, b);
  sayHello();
  printf("10 + 20 = %d\n", *c);
  printf("\n");

  printf("Don't return pointer to stack memory\n");
  printf("\n");

  printf("Return pointer to ehap memory\n");
  printf("\n");

  c = add2(a, b);
  sayHello();
  printf("10 + 20 = %d\n", *c);
  return 0;
}

int *add1(int a, int b) {
  int c = a + b;
  // Don't return a pointer to stck memory.
  // stack pushes of further functions will override the data
  return &c;
}

void sayHello() { printf("Hello, World!\n"); }

int *add2(int a, int b) {
  int *c = (int *)malloc(sizeof(int));
  *c = a + b;
  // return pointers to heap memory
  return c;
}
