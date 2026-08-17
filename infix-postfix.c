#include <ctype.h>
#include <stdio.h>

char stack[100];
int top = -1;

void push(char c) { stack[++top] = c; }

char pop() { return stack[top--]; }

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
  char infix[100], postfix[100];
  int i, j = 0;
  char c;

  printf("Enter infix expression: ");
  fgets(infix, 100, stdin);

  for (i = 0; infix[i] != '\0'; i++) {
    c = infix[i];

    if (c == ' ')
      continue;

    if (isalnum(c)) {
      postfix[j++] = c;
    }

    else if (c == '(') {
      push(c);
    }

    else if (c == ')') {
      while (top != -1 && stack[top] != '(')
        postfix[j++] = pop();

      if (top != -1)
        pop();
    }

    else {
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