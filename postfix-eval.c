#include <ctype.h>
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
  if (top < MAX - 1) {
    stack[++top] = val;
  }
}

int pop() {
  if (top >= 0) {
    return stack[top--];
  }
  printf("Error: Stack Underflow!\n");
  return 0;
}

int int_pow(int base, int exp) {
  int result = 1;
  while (exp-- > 0)
    result *= base;
  return result;
}

int evaluatePostfix(const char *expr) {
  top = -1;
  int i = 0;

  while (expr[i] != '\0') {
    if (expr[i] == ' ' || expr[i] == '\t' || expr[i] == ',' ||
        expr[i] == '\n') {
      i++;
      continue;
    }

    if (isdigit(expr[i])) {
      int num = 0;
      while (isdigit(expr[i])) {
        num = num * 10 + (expr[i] - '0');
        i++;
      }
      push(num);
    } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' ||
               expr[i] == '/' || expr[i] == '^') {
      char op = expr[i];
      i++;

      int val2 = pop();
      int val1 = pop();

      switch (op) {
      case '+':
        push(val1 + val2);
        break;
      case '-':
        push(val1 - val2);
        break;
      case '*':
        push(val1 * val2);
        break;
      case '/':
        if (val2 == 0) {
          printf("Error: Division by zero!\n");
          return 0;
        }
        push(val1 / val2);
        break;
      case '^':
        push(int_pow(val1, val2));
        break;
      }
    } else {
      i++;
    }
  }

  return pop();
}

int main() {
  char expr[MAX];

  printf("\n Postfix Expression Evaluator \n\n");

  printf("a. Expression: \"2 3 1 * + 9 -\"\n");
  printf("   Output: %d\n\n", evaluatePostfix("2 3 1 * + 9 -"));

  printf("b. Expression: \"2 2 + 2 / 5 * 7 +\"\n");
  printf("   Output: %d\n\n", evaluatePostfix("2 2 + 2 / 5 * 7 +"));

  printf("Enter a custom postfix expression: ");
  if (fgets(expr, sizeof(expr), stdin) != NULL && expr[0] != '\n') {
    int res = evaluatePostfix(expr);
    printf("Result: %d\n", res);
  }

  return 0;
}