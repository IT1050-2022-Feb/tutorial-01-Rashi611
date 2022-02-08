/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float marks1 , marks2 ;
  float total = 0 ;
  float avg ;
  printf("input mark 1 = ");
  scanf("%f", &marks1);
  printf("input mark 2 = ");
  scanf("%f", &marks2);
  total = marks1 + marks2 ;
  avg = total / 2 ;
  printf("average = %.2f", avg);

  return 0;
}

