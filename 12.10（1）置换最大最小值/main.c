#include <stdio.h>
#include <stdlib.h>
int max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
int min(int x,int y)
{
    if(x<=y)
        return x;
    else
        return y;
}
int main()
{
    int num[10],i,Max=0,Min=100,MAX,MIN;
    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
        Max=max(Max,num[i]);
        Min=min(Min,num[i]);
    }

    for(i=0; i<10; i++)
    {
        if(Max==num[i])
        {
            MAX=i;
            break;
        }
    }
    for(i=0; i<10; i++)
    {
        if(Min==num[i])
        {
            MIN=i;
            break;
        }
    }
    num[MAX]=Min;
    num[MIN]=Max;
    for(i=0; i<10; i++)
    {
        printf("%d ",num[i]);
    }
    //printf("Hello world!\n");
    return 0;
}
