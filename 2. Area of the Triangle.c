//Area of the Triangle
#include <stdio.h>
void main()
{
    float base, height, area;
    printf ("Enter Your Base Value: ");
    scanf ("%f", & base);
    printf ("Enter Your Height Value: ");
    scanf ("%f", & height);
    area = 0.5 * base * height;
    printf ("Area of the Triangle is %f", area);
}
