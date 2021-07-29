//WAP to print fibonacci series

#include<stdio.h>

//function declaration
int fibonacci(int n)
{
    //base case
    if (n <= 0)
        return n;
    else if (n == 1)
        return n;
    //recursive case
    else
        return fibonacci(n-1)+fibonacci(n-2);
}


int main()
{
    printf("Fibonacci series:\n");
     for(int i=0; i<10; i++)
     {
         printf("%d\t",fibonacci(i));//function calling
     }

     printf("\n");

     return 0;
}
