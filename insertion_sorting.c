#include <stdio.h>

void main() {
  int n;
  printf("Name : Ridham Patel");
  printf("Roll : 25BCP156");
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the element %d: ", i + 1);
    scanf("%d", &a[i]);
  }
  int key, j;
  for (int i = 0; i < n; i++) {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}