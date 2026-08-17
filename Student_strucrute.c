#include <stdio.h>

struct Student {
  char name[50];
  int rollno;
  char address[100];
};

int main() {
  int n = 2;
  struct Student s[n];

  for (int i = 0; i < n; i++) {
    printf("Enter details for Student %d:\n", i + 1);
    printf("  Name: ");
    scanf("%s", s[i].name);
    printf("  Roll Number: ");
    scanf("%d", &s[i].rollno);
    printf("  Address: ");
    scanf("%s", s[i].address);
  }

  printf("\n--- Student Details Recorded ---\n");
  for (int i = 0; i < n; i++) {
    printf("Student %d -> Name: %s | Roll No: %d | Address: %s\n", i + 1,
           s[i].name, s[i].rollno, s[i].address);
  }

  return 0;
}