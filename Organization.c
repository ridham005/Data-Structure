#include <stdio.h>

struct Employee {
  char e_name[20];
  int e_id;
  float e_salary;
};

struct Organization {
  char o_name[50];
  struct Employee e[2];
};

void main() {
  struct Organization o[2];
  for (int i = 0; i < 2; i++) {
    printf("Enter organization name: ");
    scanf("%s", o[i].o_name);
    for (int j = 0; j < 2; j++) {
      printf("Enter employee name: ");
      scanf("%s", o[i].e[j].e_name);
      printf("Enter employee id: ");
      scanf("%d", &o[i].e[j].e_id);
      printf("Enter employee salary: ");
      scanf("%f", &o[i].e[j].e_salary);
    }
  }
  for (int i = 0; i < 2; i++) {
    printf("Organization name: %s\n", o[i].o_name);
    for (int j = 0; j < 2; j++) {
      printf("\nEmployee name: %s", o[i].e[j].e_name);
      printf("\nEmployee id: %d", o[i].e[j].e_id);
      printf("\nEmployee salary: %f", o[i].e[j].e_salary);
    }
  }
}