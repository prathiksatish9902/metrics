#include <stdio.h>
#include <math.h>
int main()
{
    float km , m , cm , i , ft;
    printf("enter the kilometer : ");
    scanf ("%f\n", &km);
    m = km * 1000;
    cm = m * 100;
    i = cm * 2.54;
    ft = i * 12;
    printf("the distance in meters is : %f\n", m);
    printf("the distance in centimeter is : %f\n", cm);
    printf("the distance in inches is : %f\n", i);
    printf("the distance in feet is : %f\n", ft);
    return 0;
}
