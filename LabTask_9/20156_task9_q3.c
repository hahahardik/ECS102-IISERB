// WAP to merge two arrays in ascending order

#include <stdio.h>

void merge(int A[], int B[])
{

    int a[5]={1,2,3,6,7};
    int b[7]={2, 3, 5, 6, 8, 9, 10};
    int c[12];

    int i=0,j=0,x=0, count=5, flag=1;



    for(i=0;i<5;i++){
        c[i]=a[i];
    }

    for(i=0;i<7;i++){
        flag=1;
        x=0;
        for(j=0;flag==1 && j<5;j++){
            if(a[j]==b[i]){
            flag=0;
            }
        }
        if(flag==1){
            c[count]=b[i];
            count++;
        }
    }

    printf("\nThe Merged Array C is:\t");
    for(i=0;i<count;i++)
        printf("%d\t", c[i]);

}

int main()
{
    int i;

    int A[5]={1,2,3,6,7};
    int B[7]={2, 3, 5, 6, 8, 9, 10};
    int C[12];

    printf("Array A is:\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t", A[i]);
    }

    printf("\n");

    printf("\nArray B is:\t");
    for(i=0;i<7;i++){
        printf("%d\t", B[i]);
    }

    printf("\n");

    merge(A,B);
    printf("\n");

    return 0;
}
