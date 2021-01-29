#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;//各项系数
    double x1,x2;//两个根
    double disc;//判别式
    printf("Please input a b c .\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
//printf("%lf\n",disc);
    if(disc<0)
    {
        printf("Error,has no root!");
    }
    else
    {
        x1=((-b+sqrt(disc))/(2*a));
        x2=((-b-sqrt(disc))/(2*a));
        printf("x1 = %.2lf\nx2 = %.2lf\n",x1,x2);
    }
    // printf("Hello world!\n");*/
    return 0;
}
