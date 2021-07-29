// WAP to take input and compare Weight and Height

#include<stdio.h>

int main()
{
    float H[10], W[10]; //H=height  W=weight
    int i, j=0, k=0, l=0; //j=weight count   k=height count

    printf("Enter the following information:\n");

    for (i=0; i<10; i++)
    {
        printf("\nHeight of Boy %d: ", i+1);
        scanf("%f", &H[i]);
        printf("Weight of Boy %d: ", i+1);
        scanf("%f", &W[i]);
    }

    //weight comparison
    for (i=0; i<10; i++)
    {
        if (W[i] < 50)
            j++;
        else
            continue;
    }

    //height comparison
    for (i=0; i<10; i++)
    {
        if (H[i] > 170)
            k++;
        else
            continue;
    }

    //height and weight comparison
    for (i=0; i<10; i++)
    {
        if ((H[i] > 170) && (W[i] < 50))
            l++;
        else
            continue;
    }

    printf("\nRESULTS:\n");
    printf("1. No. of boys with weight less than 50 kgs: %d.\n", j);
    printf("2. No. of boys with height greater than 170 cms: %d.\n", k);
    printf("3. No. of boys with both weight less than 50 kgs and height greater than 170 cms: %d.\n", l);

    return 0;
}
