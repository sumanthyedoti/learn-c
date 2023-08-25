#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(sizeof(int));
  *p = 10;
  printf("value at %p -- %d\n", p, *p);
  printf("\n");

  // array
  short n = 4;

  free(p);
  printf("malloc:\n");
  // malloc return a void pointer
  /* void pointer is a generic pointer type that is generally type casted into a
   * data type
   */
  p = (int *)malloc(4 * sizeof(int));
  // p can store 4 ints
  for (int i = 0; i < n; i++) {
    p[i] = (i + 1) * 10;
    printf("value at %p -- %d\n", p + i, *(p + i));
  }
  printf("\n");

  free(p);
  printf("calloc:\n");
  // calloc initializes memory with 0
  p = (int *)calloc(4, sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("value at %p -- %d\n", p + i, *(p + i));
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    p[i] = (i + 1) * 10;
  }

  printf("realloc:\n");
  n += 2;
  p = (int *)realloc(p, n * sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("value at %p -- %d\n", p + i, *(p + i));
  }
  return 0;
}
