//WAP to remove a number from array

#include <stdio.h>

int main ()
{
    int m[12] = {3, 4, 7, 11, 18, 29, 45, 71, 87, 89, 93, 96};
    int position, i, size = 12;

    printf("Enter the position where you wish to delete element: ");
    scanf("%d", &position);

    if (position > size)
        printf("\nDeletion is not possible.\n");
    else
    {
        i = position - 1;
        while (i < size - 1)
        {
            m[i] = m[i+1];
            i++;
        }

        printf("\nNumber at position %d Deleted.\n", position);
    }

    return 0;
}
