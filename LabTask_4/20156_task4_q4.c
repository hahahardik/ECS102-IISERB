// WAP to tell if entered character is a vowel or a consonant.

#include <stdio.h>
int main()
{
    char input;

    //Input character
    printf("Enter a character: ");
    scanf("%c", &input);

    //Vowels
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input =='u')
        printf("\nThe entered character is a VOWEL.\n");
    else
        printf("\nThe entered character is a CONSONANT.\n");

    return 0;

}
