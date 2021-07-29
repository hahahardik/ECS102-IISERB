//WAP to sort an array using pointers

#include<stdio.h>

//sorting using selection sort algorithm
void selection_sort(int *a, int size)
{
    int small;
    int i, j, k, temp, POS;

    for (i = 0; i < size; i++)
    {
        small = *(a+i);

        for (j = i+1; j < size; j++)
        {
            if (*(a+j) < small)
            {
                //small = *(a+j);
                //POS = j;
                temp = *(a+j);
                *(a+j) = *(a+i);
                *(a+i) = temp;
            }
        }

        //Stepwise Print
        printf("\nStep %d:\t", i+1);
        for (k=0; k<size; k++)
            printf("%d\t", a[k]);
        getch();

    }

}

//prints the final array
void printArray(int *a[], int size)
{
    int x;

    printf("\n");

    printf("\nThe Sorted Array is:\t");
    for (x=0; x<size; x++)
        printf("%d\t", a[x]);

}

int main()
{
    int n;

    int arr[5] = {5, 89, 47, 51, 15};
    int size = 5;

    int *arr_p[5];

    for (n=0; n<5; n++)
    {
        arr_p[n] = &arr[n];
    }

    for (n=0; n<5; n++)
    {
        printf("%d\t", arr_p[n]);
    }
    printf("\n");

    for (n=0; n<5; n++)
    {
        printf("%d\t", *arr_p[n]);
    }
    printf("\n");

    selection_sort(arr, size);

    printArray(arr, size);

    printf("\n");

    return 0;
}
