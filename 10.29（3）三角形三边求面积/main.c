#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a=0,b=0,c=0,p=0,area=0;
    scanf("%f%f%f",&a,&b,&c);
    if (abs(a-b)>=c||abs(b-c)>=a||abs(a-c)>=b)
    {
        int A=a;
        int B=b;
        int C=c;
        printf("(%d,%d,%d)不构成三角形\n",A,B,C);
    }

    else
    {
        p=(a+b+c)/2;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("area=%.2f\n",area);
    }
    return 0;
}
// a=(int)a;b=(int)b;c=(int)c;
