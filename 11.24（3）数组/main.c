#include <stdio.h>
#include <stdlib.h>

int main()
{
    int littlefish[10],i;
    for(i=0;i<=9;i++)
    {
        littlefish[i]=i;
    }
    for(i=9;i>=0;i--)
    {
        printf("%4d",littlefish[i]);
    }
    //printf("Hello world!\n");
    return 0;
}
