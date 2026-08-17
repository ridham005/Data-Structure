#include <stdio.h>
struct Student {
  char name[10];
  int rollno;
  char address[50];
};

void main() {
  struct Student s[2];
  for (int i = 0; i < 2; i++) {
    printf("Enter name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter roll number of student %d: ", i + 1);
    scanf("%d", &s[i].rollno);
    printf("Enter address of student %d: ", i + 1);
    scanf("%s", s[i].address);
  }
  for (int i = 0; i < 2; i++) {
    printf("Name of student %d: %s\n", i + 1, s[i].name);
    printf("Roll number of student %d: %d\n", i + 1, s[i].rollno);
    printf("Address of student %d: %s\n", i + 1, s[i].address);
  }
}