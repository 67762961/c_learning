#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a,b,c,s,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f\n",(float)area);
    return 0;
}

