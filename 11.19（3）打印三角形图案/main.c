#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=1,x;
    scanf("%d",&x);
    j=0;
    while(j<x)
    {
        i=0;
        while(i<=j)
        {
            printf("*");
            if(i==j)
            {
                printf("\n");
            }
            i++;
        }
        j++;
    }

    //printf("Hello world!\n");
    return 0;
}
