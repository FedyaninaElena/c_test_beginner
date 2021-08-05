#include <stdio.h>

int main(){

  for (int n = 0; n < 5; n++)
  {
    for(int m = 0; m < 5; m++)
    {
      if (n == 2)
      {
        printf("0");
        continue;
      }
      if (m == 2)
      {
        printf("0");
        continue;
      }
      printf(" ");
    }
    printf("\n");
  }
  printf("----------\n");

  for (int n = 0; n < 5; n++)
  {
    for(int m = 0; m < 5; m++)
    {
      if (n == m || n == 4 - m)
      {
      printf("0");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  printf("----------\n");

  for (int n = 0; n < 5; n++)
  {
    for(int m = 0; m < 5; m++)
    {
      printf("0");
      if (m == n)
      {
        break;
      }
    }
    printf("\n");
  }

  return 0;
}
