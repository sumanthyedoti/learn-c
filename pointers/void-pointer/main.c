#include <stddef.h>
#include <stdio.h>

/** A pointer to void is a general-purpose pointer used to hold references to
 * any data type.
 */

int main() {
  int inum = 10;
  float fnum = 10.92304923;
  int *np = &inum;
  float *fp = &fnum;
  printf("Value of inum: %d\n", *np);
  printf("Value of fnum: %f\n", *fp);

  /** Any pointer can be assigned to a pointer to void.
   * It can then be cast back to its original pointer type.
   * When this happens the value will be equal to the original pointer value. */
  // int point to void pointer
  void *vp = np;
  // void point to int pointer
  np = (int *)vp;
  printf("Value of num: %d\n", *np);

  // float point to void pointer
  vp = fp;
  // void point to float pointer
  printf("Value of fnum: %f\n", *(float *)vp);

  /** sizeof operator can be used with a pointer to void. */
  size_t size = sizeof(void *); // Legal
  printf("Size of 'void *': %ld\n", size);
  /** Cannot use the operator with void  */
  size = sizeof(void); //! Illegal

  return 0;
}
