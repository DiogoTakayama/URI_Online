#include <stdio.h>

int main()
{
    int T, c, m;
    int PA, PB;
    double ac, bc;

    scanf("%d", &T);
    for(m=1; m<=T; m++)
    {
        c = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &ac, &bc);
        while(PA <= PB)
        {
            PA *= (ac / 100.0) + 1.0;
            PB *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100)
            printf("%d anos.\n", c);
    }
    return 0;
}
