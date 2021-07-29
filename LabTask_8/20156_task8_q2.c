//WAP to insert a number in the array

#include <stdio.h>

int main ()
{
    int m[12] = {3, 4, 7, 11, 18, 29, 45, 71, 87, 89, 93, 96};
    int a, size = 12, posn, num;

    printf("Enter the element to insert in the array : ");
    scanf("%d", &num);
    printf("Enter the position to insert: ");
    scanf("%d", &posn);

    if (posn > size + 1 || posn <= 0)
        printf("\nOverflow\n");
    else
    {
        a = size;
        while (a >= posn)
        {
            m[a] = m[a-1];
            a--;
        }

        m[posn-1] = num;
        size++;

        printf("\n%d is entered in the array at position %d\n", num, posn);
    }

    return 0;
}
