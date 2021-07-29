//Determine where the cost of operation would be minimum

#include<stdio.h>

//Function to calculate the total_cost value at a
float total_cost(float a)
{
    float total_c;

    if (a<0)
        total_c = 0;
    else
        total_c = 40 - (8*a) + a*a;

    return total_c;
}

int main()
{
    float p, min_cost;

    for (p=0.1; p<=10; p = p + 0.1)
    {
        if (total_cost(p) < total_cost(p-0.1))
            continue;
        else
        {
            min_cost = total_cost(p-0.1);
            break;
        }
    }

    printf("The Minimum Cost of Operation would be %f at p = %f.\n", min_cost, (p-0.1));

    return 0;
}
