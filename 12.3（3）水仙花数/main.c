#include <stdio.h>
#include <stdlib.h>

int sxh(int x)
{
    int o,t,h;
    o=x%10;
    t=(x%100-o)/10;
    h=(x-10*t-0)/100;
    if(x==o*o*o+t*t*t+h*h*h)
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    for(x=100; x<=999; x++)
    {
        if(sxh(x))
        {
            printf("%d\n",x);
        }
    }

    return 0;
}
