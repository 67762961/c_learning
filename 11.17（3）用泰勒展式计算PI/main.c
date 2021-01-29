#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=0;
    long double n=1.0,sign=1.0,PI,term=1,X;
    scanf("%d",&x);
    X=pow(10,-x);
    while(fabs(term)>=X)
    {
        PI=PI+term;
        sign=-sign;
        n=n+2;
        term=sign/(double)n;
    }

    printf("%.*lf",x,4*PI);
    return 0;
}
