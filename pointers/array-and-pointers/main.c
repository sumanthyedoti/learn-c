#include <stdio.h>

int main() {
  int arr[] = {2, 4, 1, 3, 6, 8, 5, 7};
  printf("element at index 0, address %p -- %d\n", arr, *arr);
  printf("element at index 1, address %p -- %d\n", arr + 1, *(arr + 1));
  printf("\n");

  printf("arr = &arr[0]      |  *arr = arr[0]\n");
  printf("arr + 1 = &arr[1]  |  *(arr + 1) = arr[1]\n");
  printf("element at index 0, address %p -- %d\n", &arr[0], arr[0]);
  printf("element at index 1, address %p -- %d\n", &arr[1], arr[1]);
  return 0;
}
