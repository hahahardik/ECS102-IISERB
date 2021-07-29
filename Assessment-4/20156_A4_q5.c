// WAP to read marks of students and give grades

#include<stdio.h>

int main()
{
    int n, m, i, j;
    float percent, total, marks;
    //n = No. of students
    //m = No. of Subjects

    printf("Enter the number of Students: ");
    scanf("%d", &n);
    printf("\nEnter the number of Subjects: ");
    scanf("%d", &m);

    for (i=0; i<n; i++)
    {
        printf("\nEnter Marks (Out of 100) for Student %d:\n",i+1);

        total = 0;

        for (j=0; j<m; j++)
        {
            printf("Subject %d: ", j+1);
            scanf("%f", &marks);

            total += marks;
        }

        percent = total / m;

        if (percent >= 60)
            printf("\nResult: FIRST DIVISION\n");
        else if (percent >= 35 && percent < 60)
            printf("\nResult: SECOND DIVISION\n");
        else
            printf("\nResult: FAIL\n");

    }

    return 0;
}
