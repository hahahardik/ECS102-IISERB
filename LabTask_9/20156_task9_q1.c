//WAP to sort using selection sort

#include <stdio.h>

int selection_sort();
int a[30], n;

int main()
{
    int i;

    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    getch();

    selection_sort();

    printf("\nSorted Array is:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    getch();

    printf("\n");
}


int selection_sort()
{
    int i, j, k, min, temp;

    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\nStep %d:\t", i+1);
        for(k=0; k<n; k++)
            printf("%d\t", a[k]);

    }
}
