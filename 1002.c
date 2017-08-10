/******************************************************************
 * The formula for calculating the area of a circle is:           *
 * area = π. ray². Considering for this problem that π = 3.14159  *
 * Perform the area calculation by raising the value of Radius    *
 * squared and multiplying by π.                                  *
 ******************************************************************/

#include <stdio.h>

int main()
{
    double raio, area;
    
    scanf("%lf", &raio);

    area = 3.14159 * raio * raio;

    printf("A=%.4lf\n", area);

    return 0;
}
