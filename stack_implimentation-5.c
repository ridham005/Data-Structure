#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int val) {
  if (top == MAX - 1) {
    printf("Stack Overflow!\n");
    return;
  }
  stack[++top] = val;
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow!\n");
    return;
  }
  printf("Popped element: %d\n", stack[top--]);
}

void display() {
  if (top == -1) {
    printf("Stack is empty.\n");
    return;
  }
  printf("Current stack (top to bottom): ");
  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  int choice, val;

  while (1) {
    printf("\n--- Stack Menu ---\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    printf("Enter choice: ");
    if (scanf("%d", &choice) != 1)
      break;

    switch (choice) {
    case 1:
      printf("Enter integer element: ");
      scanf("%d", &val);
      push(val);
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("Invalid choice! Try again.\n");
    }
  }

  return 0;
}