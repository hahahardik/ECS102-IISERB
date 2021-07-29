//WAP to create a nested structure

#include<stdio.h>

int main ()
{
    struct student{
        char name[30];
        int roll_no;
        float marks;
    };

    struct college{
        char name[30];
        char place[30];
        struct student info;
    }stud[10];

    int i;

    for (i=0; i<10; i++)
    {
        printf("\nEnter the Information for Student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", &stud[i].info.name);
        printf("Roll No.: ");
        scanf("%d", &stud[i].info.roll_no);
        printf("Marks: ");
        scanf("%f", &stud[i].info.marks);
        printf("College Name: ");
        scanf("%s", &stud[i].name);
        printf("College Place: ");
        scanf("%s", &stud[i].place);

    }

    printf("\nInformation collected:\n");
    printf("\n");

    for (i=0; i<10; i++)
        printf("Name: %s\tRoll No.: %d\t Marks: %f\tCollege: %s\tCollege Place: %s\n", stud[i].info.name, stud[i].info.roll_no, stud[i].info.marks, stud[i].name, stud[i].place);

    return 0;
}
