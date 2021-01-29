#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,a[80]={0};
    scanf("%d",&num);
    if(num<0)
    {
        printf("-");
        num=-num;
    }
    int y,i;
    for(i=1;num>=1;i++)
    {
        y=num%2;
        num=num/2;
        a[i]=y;
    }
    for(;i>1;i--)
    {
        printf("%d",a[i-1]);
    }
    //printf("Hello world!\n");
    return 0;
}
