#include <stdio.h>
int main() {
  int size, search;
  printf("Name : Ridham Patel");
  printf("Roll : 25BCP156");
  printf("Enter the Size of Array :\n");
  scanf("%d", &size);
  int a[size];
  for (int i = 0; i < size; i++) {
    printf("enter the %d th element:", i);
    scanf("%d", &a[i]);
  }
  printf("enter the element you want to search:");
  scanf("%d", &search);
  for (int i = 0; i < size; i++) {
    if (a[i] == search) {
      printf("your element found at %d index:\n", i);
    }
  }
  return 0;
}