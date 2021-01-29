#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0,sum=0;
   // printf("Input a number.\n");
    scanf("%d",&x);
    for (sum=0;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
