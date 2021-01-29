#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,x,m=0,n;
    scanf("%d",&x);
    m=((2*x-1)-1)/2;
    while(j<2*x-1)
    {
        i=0;
        n=1;
        while(n<=m)
        {
            printf(" ");
            n++;
        }
        while(i<=j)
        {
            printf("*");
            if(i==j)
            {
                printf("\n");
                m--;
            }
            i++;
        }
        j=j+2;
    }

    //printf("Hello world!\n");
    return 0;
}
