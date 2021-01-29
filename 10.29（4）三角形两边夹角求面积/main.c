#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main()
{
    double a,b,x,X,area;
    scanf("%lf%lf%lf",&a,&b,&x);
    X=PI*x/180;
    area=0.5*a*b*sin(X);
    printf("area=%.2lf\n",area);
    return 0;
}
