// WAP to sort using Bubble sort

#include<stdio.h>
#include<conio.h>

void bubblesort(int a[], int n);

int main()
{
    int a[4], i, j, temp;
    printf("Enter 4 array elements:");
    for(i=0; i<4; i++)
        scanf("%d", &a[i]);

    bubblesort(a, 4);

    printf("\nSorted Array is:\n");
    for(i=0; i<4; i++)
        printf("%d ", a[i]);
    getch();

    return 0;
}

void bubblesort(int a[], int n)
{
    int i, j, temp;

    for(i=0; i<(4-1); i++)
    {
        for(j=0; j<(4-i-1); j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

        printf("\n");

        printf("Step %d: ", i+1);
        for(j=0; j<4; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
}
