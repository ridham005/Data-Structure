#include <ctype.h>
#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
  if (top < MAX - 1)
    stack[++top] = c;
}

char pop() {
  if (top >= 0)
    return stack[top--];
  return '\0';
}

int priority(char c) {
  if (c == '^')
    return 3;
  if (c == '*' || c == '/')
    return 2;
  if (c == '+' || c == '-')
    return 1;
  return 0;
}

int main() {
  char infix[MAX], postfix[MAX];
  int j = 0;

  printf("Enter infix expression: ");
  if (!fgets(infix, sizeof(infix), stdin))
    return 0;

  for (int i = 0; infix[i] != '\0'; i++) {
    char c = infix[i];

    if (c == ' ' || c == '\n')
      continue;

    if (isalnum(c)) {
      postfix[j++] = c;
    } else if (c == '(') {
      push(c);
    } else if (c == ')') {
      while (top != -1 && stack[top] != '(')
        postfix[j++] = pop();
      if (top != -1)
        pop(); // Discard '('
    } else {
      while (top != -1 && stack[top] != '(' &&
             (priority(stack[top]) > priority(c) ||
              (priority(stack[top]) == priority(c) && c != '^'))) {
        postfix[j++] = pop();
      }
      push(c);
    }
  }

  while (top != -1)
    postfix[j++] = pop();

  postfix[j] = '\0';
  printf("Postfix expression: %s\n", postfix);

  return 0;
}