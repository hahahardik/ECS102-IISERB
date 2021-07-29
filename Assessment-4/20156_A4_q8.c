//WAP to find the median of a user defined array using bubble sort.

#include<stdio.h>

//Function to sort an array using bubble sort algorithm
void bubble_sort (float a[], int size)
{
    int i, j, k, temp;

    for (i=0; i<size; i++)
    {
        for (j=0; j<((size-1) - i); j++)
        {
            if (a[j] > a[j+1])
            {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int size, mid, m;
    float median, mean;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    float a[size];
    printf("\nEnter %d Elements:\n", size);
    for (m=0; m<size; m++)
        scanf("%f", &a[m]);

    bubble_sort(a, size);

    if (size % 2 != 0)
    {
        mid = (size/2);
        median = a[mid];
    }
    else
    {
        mid = (size/2);
        median = (a[mid-1] + a[mid]) / 2;
    }

    printf("\nThe Median of the array is %f\n.", median);

    return 0;
}
