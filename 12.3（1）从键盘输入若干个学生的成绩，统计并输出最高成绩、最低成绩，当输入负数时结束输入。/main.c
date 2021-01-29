#include <stdio.h>
#include <stdlib.h>
int Max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
int Min(int x,int y)
{
    if(x>=y)
        return y;
    else
        return x;
}
int score[100];
int main()
{
    int i,max=0,min=100,num;
    for(i=0; score[i-1]>=0&&i<=99; i++)
    {
        scanf("%d",&score[i]);
    }
    num=i;
    for(i=0; i<=num-2; i++)
    {
        max=Max(score[i],max);
        min=Min(score[i],min);
    }


    printf("%d:%d",max,min);


    return 0;
}
