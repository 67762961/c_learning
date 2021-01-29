#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,m;
    scanf("%d",&x);
    for(j=0; j<=x-1; j++)
    {
        for(m=0; m<=j-1; m++)
        {
            printf(" ");
        }
        for(i=0; i<=x-1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    //printf("Hello world!\n");
    return 0;
}
