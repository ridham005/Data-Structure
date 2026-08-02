#include <stdio.h>
void main() {
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the element %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  int max = a[0];
  int min = a[0];
  int max_1 = a[0];
  int min_1 = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
    if (a[i] > max_1 && a[i] != max) {
      max_1 = a[i];
    }
    if (a[i] < min_1 && a[i] != min) {
      min_1 = a[i];
    }
  }
  printf("The maximum element is %d\n", max);
  printf("The minimum element is %d\n", min);
  printf("The second maximum element is %d\n", max_1);
  printf("The second minimum element is %d\n", min_1);
}