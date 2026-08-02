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
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}