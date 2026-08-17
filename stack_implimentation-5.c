#include <stdio.h>

void main() {
  int str[50];
  int top = 0, n;
  printf("Enter size of stack");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Enter element: %d", i + 1);
    scanf("%d", &str[i]);
    top++;
  }

  printf("Final stack is: ");
  for (int i = top - 1; i >= 0; i--) {
    printf("%d", str[i]);
  }
  while (1) {
    printf("\n1. Push\n2. Pop\n3. Display\n4. Sort\n5. Exit\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter element: ");
      scanf("%d", &str[top]);
      top++;
      break;
    case 2:
      top--;
      break;
    case 3:
      for (int i = top - 1; i >= 0; i--) {
        printf("%d", str[i]);
      }
      break;
    case 4:
      exit(0);
    }
  }
}