#include <stdio.h>

int main() {
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int t = 7;
  int low = 0;
  int high = 9;
  int found = 0;

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
