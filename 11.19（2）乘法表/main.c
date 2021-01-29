#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    while(j<=8)
    {
        j++;
        i=0;
        while(i<=j)
        {
            i++;
            printf("%dx%d=%d ",i,j,j*i);
            if(i==j)
            {
                printf("\n");
                break;
            }
        }


    }
    //printf("Hello world!\n");
    return 0;
}
