// WAP to check if the number is palindrome

#include <stdio.h>
#include <math.h>

//function prototype
int reversse(int num);
int palindrome(int num);

int main()
{
    int num;

    //User input
    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num)  == 1)
        printf("\n%d is a palindrome number.\n", num);
    else
        printf("\n%d is NOT a palindrome number.\n", num);

    return 0;
}


//function declaration
//To check if it is palindrome or not
int palindrome(int num)
{
    if (num == reverse(num))
        return 1;

    return 0;
}


//Recursive function to ind the reverse
int reverse(int num)
{
    //To find the number of digits in num
    int digit = (int)log10(num);

    //base condition
    if (num == 0)
        return 0;

    int rev = (num%10 * pow(10,digit)) + reverse(num/10);

    return (rev);
}
