#include <stdio.h>

int main(void)
{
  
  int start;
  int current;
  
  //this asks user for the starting num*/
  printf("Enter an integer: ");
  scanf("%d", &start);
  
  current = start;

  while (current <= start + 10) /*while loop til it reaches 10 more than the starting value*/
  {
    printf("%d \n", current);
    current++; /*moves to the next number*/
    
  }
  
  return 0;
  
}
  