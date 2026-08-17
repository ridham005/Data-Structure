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
  int min_idx, temp;
  for (int i = 0; i < n; i++) {
    min_idx = i;

    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min_idx]) {
        min_idx = j;
      }
    }

    temp = a[min_idx];
    a[min_idx] = a[i];
    a[i] = temp;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}