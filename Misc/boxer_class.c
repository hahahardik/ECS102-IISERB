#include <stdio.h>
int main()
{
    float weight;
    char w_class;

    printf("Input weight in pounds: ");
    scanf("%f", &weight);

    if (weight < 115)
        w_class = 'Flyweight';
    else if (weight >=115 && weight < 121)
        w_class = 'Bantamweight';
    else if (weight >=122 && weight < 153)
        w_class = 'Featherweight';
    else if (weight >=154 && weight < 189)
        w_class = 'Middleweight';
    else
        w_class = 'Heavyweight';

    printf("The Boxer belongs to %c Class.\n", w_class);

    return 0;
}
