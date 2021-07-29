//WAP to create a multiplication table for 1-5

#include<stdio.h>
int main()
{
    int i,j,row,column;

    int A[5][5];

    for(i=0; i<5; i++)
    {
        row=i+1;

        for(j=0; j<5; j++)
        {
            column=j+1;
            A[i][j] = row*column;
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t", A[i][j]);
        }

        printf("\n");
    }

    return 0;
}
