// WAP to print a pyramid

#include <stdio.h>
int main()
{
   int i, space, rows, count;

   rows = 4;

   for (i = 1; i <= rows; i++, count = 1)
    {
      for (space = 1; space <= rows - i; space++)
      {
         printf("  ");
      }

      for(count = 1; count <= 2*i-1; count++)
            printf("%d ", count*count);

      printf("\n");
    }

   return 0;
}
