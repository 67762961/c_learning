#include <stdio.h>
#include <stdlib.h>

int main()
{
    double benjin=1000.0,r1=0.0036,r2=0.0225,r3=0.0198,g1,g2,g3;
    g1=benjin*(1+r1);
    g2=benjin*(1+r2);
    g3=benjin*(1+r3/2)*(1+r3/2);
    printf("%f %f %f",g1,g2,g3);
    return 0;
}
