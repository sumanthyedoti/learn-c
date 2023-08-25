#include <stdio.h>

int main() {
  printf("\n");
  printf("int a  <--*p_a--  int *p_a  <--*pp_a--  int **pp_a\n");
  printf("  ^.________________ **pp_a _________________/\n");
  printf("\n");

  int a = 10;
  printf("a  -- %d\n", a);
  printf("&a -- %p\n", &a);
  printf("\n");

  int *p_a = &a;
  printf("*p_a = a -- %d\n", *p_a);
  printf("p_a = &a -- %p\n", p_a);
  printf("&p_a     -- %p\n", &p_a);
  printf("\n");

  int **pp_a = &p_a;

  printf("=> Type of address of 'int *' variable is 'int **'\n");
  printf("\n");

  // dereferencing pointer of a pointer
  printf("*(*pp_a) = *p_a = a -- %d\n", *(*pp_a));
  printf("*pp_a = p_a = &a    -- %p\n", *pp_a);
  printf("pp_a = &p_a         -- %p\n", pp_a);
  printf("&pp_a               -- %p\n", &pp_a);
  printf("\n");

  *p_a = **pp_a + 2;
  printf("a  -- %d\n", a);
  return 0;
}
