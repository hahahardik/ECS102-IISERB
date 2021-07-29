// Find the sum of diagonal of MxN matrix

#include<stdio.h>

int main()
{
    int A[100][100], i, j, n;
    int row, column, add_main, add_opp;


    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    if (row!=column)
        printf("\nDiagonal cannot be computed as the Matrix formed is not a Square matrix.\n");
    else
    {
        //take input for matrix
        printf("\nEnter the Matrix:\n");
        for (i=0; i<row; i++)
        {
            for (j=0; j<column; j++)
            {
                printf("Enter the A[%d][%d] element: ", i, j);
                scanf("%d", &A[i][j]);
            }

            printf("\n");
        }

        //Addition of main diagonal
        add_main = 0;
        for (i=0; i<row; i++)
        {
            j = i;
            add_main += A[i][j];
        }

        //Addition of opposite diagonal
        add_opp = 0;

        for (i=0, n=column-1; i<row, n>=0; i++, n--)
        {
            add_opp += A[i][n];
        }

        printf("\nThe addition of the MAIN diagonal is: %d\n", add_main);
        printf("\nThe addition of the OPPOSITE diagonal is: %d\n", add_opp);
        printf("\nThe addition of the MAIN and OPPOSITE diagonal is: %d\n", add_main + add_opp);
    }

    return 0;
}
