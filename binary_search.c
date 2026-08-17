#include <stdio.h>

int main() {
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int t = 8, low = 0, high = 9, found = 0;
  printf("Name : Ridham Patel");
  printf("Roll : 25BCP156");

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == t) {
      printf("The target element is at index %d\n", mid);
      found = 1;
      break;
    } else if (a[mid] < t) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  if (!found) {
    printf("Element not found\n");
  }

  return 0;
}
