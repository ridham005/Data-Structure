#include <stdio.h>
void main() {
  int a[10] = {4, 7, 3, 2, 9, 5, 1, 0, 8, 6};
  int t = 5;
  for (int i = 0; i < 10; i++) {
    if (a[i] == t) {
      printf("The target element is at index %d", i);
    }
  }
}