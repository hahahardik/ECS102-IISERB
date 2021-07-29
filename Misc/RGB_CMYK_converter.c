/*Practice on conditional statements*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int r, g, b;
    float c, m, y, k, w;

    printf("Enter the RGB values: ");
    scanf("%d%d%d", &r, &g, &b);

    //Value of w
    if ((r > g) && (r > b))
        w = r / 255;
    if ((g > r) && (g > b))
        w = g / 255;
    if ((b > r) && (b > g))
        w = b / 255;

    // RGB = 0 condition
    /*if (r == g == b == 0)
        c = m = y = 0;
        k = 1;*/

    //Equations of c, m, y, k
    c = (w - (r/255))/w;
    m = (w - (g/255))/w;
    y = (w - (b/255))/w;
    k = 1 - w;

    printf("The CMYK values are %d %d %d %d.\n", c, m, y, k);

    return 0;
}
