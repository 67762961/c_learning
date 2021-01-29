#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t;
    int a[]= {34,67,90,43,124,87,65,99,132,126};
    for(i=0; i<=8; i++)
    {
        for(j=0; j<=8; j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0; i<=9; i++)
    {
        printf("%5d",a[i]);
    }

    // printf("Hello world!\n");
    return 0;
}
