// Print prime numbers from 1 to 300

#include <stdio.h>
int main ()
{
    int num, count, flag;

    for (num = 2; num <= 300; num++)
    {
        flag = 0;

        for (count = 2; count <= num/2; count++)
        {
            if (num % count == 0)
            {
                   flag = 1;
                   break;
            }
        }

        if (flag == 0 && num != 1)
            printf("%d\t", num);
    }

    return 0;
}
