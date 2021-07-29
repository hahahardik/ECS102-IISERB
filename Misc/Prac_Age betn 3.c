// Comparison of age between 3 people

#include <stdio.h>
int main()
{
  int ram, shyam, ajay;

  printf("Enter the age of Ram: ");
  scanf("%d", &ram);
  printf("Enter the age of Shyam: ");
  scanf("%d", &shyam);
  printf("Enter the age of Ajay: ");
  scanf("%d", &ajay);

  if (ram < shyam)
  {
      if (ajay < ram)
        printf("Ajay is youngest among them all.\n");
      else
        printf("Ram is youngest among them all.\n");
  }
  if (shyam < ram)
  {
      if (ajay < shyam)
        printf("Ajay is youngest among them all.\n");
      else
        printf("Shyam is youngest among them all.\n");
  }
  if (ajay < ram)
  {
     if (shyam < ajay)
          printf("Shyam is youngest among them all.\n");
        else
           printf("Ajay is youngest among them all.\n");
  }

  return 0;
}
