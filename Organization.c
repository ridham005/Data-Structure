#include <stdio.h>

struct Employee {
  char e_name[50];
  int e_id;
  float e_salary;
};

struct Organization {
  char o_name[50];
  struct Employee e[2];
};

int main() {
  int num_orgs = 2;
  int num_emps = 2;
  struct Organization orgs[num_orgs];

  for (int i = 0; i < num_orgs; i++) {
    printf("\nEnter Organization %d Name: ", i + 1);
    scanf("%s", orgs[i].o_name);

    for (int j = 0; j < num_emps; j++) {
      printf("  Enter Employee %d Name: ", j + 1);
      scanf("%s", orgs[i].e[j].e_name);
      printf("  Enter Employee ID: ");
      scanf("%d", &orgs[i].e[j].e_id);
      printf("  Enter Employee Salary: ");
      scanf("%f", &orgs[i].e[j].e_salary);
    }
  }

  printf("\n================ Organization Summary ================\n");
  for (int i = 0; i < num_orgs; i++) {
    printf("\nOrganization: %s\n", orgs[i].o_name);
    for (int j = 0; j < num_emps; j++) {
      printf("  [%d] Name: %-15s | ID: %-5d | Salary: %.2f\n", j + 1,
             orgs[i].e[j].e_name, orgs[i].e[j].e_id, orgs[i].e[j].e_salary);
    }
  }

  return 0;
}