#include <stdio.h>
#include <math.h>

int main()
{
    float x,result;
    scanf("%f",&x);
    if(x>=0)
        result=sqrt(x);
    else
        result=pow((x+1),2)+2*x+pow(x,-1);
    printf("f(%.2f)=%.2f",x,result);
    return 0;
}
