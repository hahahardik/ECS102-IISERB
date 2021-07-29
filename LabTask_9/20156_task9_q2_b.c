// WAP to sort using insertion sort

#include<stdio.h>
#include<conio.h>

void insertion(int [], int );

int main()
{
     int a[30];
     int i,size;

     printf("Enter total no. of elements : ");
     scanf("%d",&size);
     printf("\n");

     for(i=0; i<size; i++)
     {
        printf("Enter %d element : ",i+1);
        scanf("%d",&a[i]);
     }

     insertion(a,size);

     printf("\nThe sorted array is:\t");
     for(i=0; i<size; i++)
        printf("%d\t",a[i]);
     getch();

    printf("\n");

    return 0;

}

void insertion(int a[], int size)
{
     int i,j,temp;

     for(i=0; i<size; i++)
     {
       for(j=i-1; j>=0; j--)
       {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
            else
              break;
       }
     }
}
