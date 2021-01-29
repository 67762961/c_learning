#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=0,i=2,flag=1;
    printf("Input a number\n");
    scanf("%d",&n);
    while(i<=sqrt(n)&&1==flag)
    {
        if(0==n%i)
        {
            flag=0;
        }
        else
        {
            i++;
        }
    }
    if(1==flag)
        printf("%d is a prime\n",n);
    else
        printf("%d is not a prime\n",n);
    return 0;
}
