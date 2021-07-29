//WAP to send a structure as a parameter to a function

#include<stdio.h>

struct student{
    char name[50];
    int age;
    int roll_no;
    }s1;

void display(struct student stud)
{
    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", stud.name);
    printf("Age: %d\n", stud.age);
    printf("Roll No.: %d\n", stud.roll_no);

}

int main()
{
    printf("Enter Name: ");
    scanf("%s", &s1.name);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter Roll No.: ");
    scanf("%d", &s1.roll_no);

    display(s1);

    return 0;
}
