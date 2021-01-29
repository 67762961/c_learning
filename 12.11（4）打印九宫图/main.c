#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b,i,c,d,j;
    scanf("%d",&x);
    a=(x-1)/2;
    b=x-1;
    int num[x][x];
    for (c=0; c<=x-1; c++)
    {
        for(d=0; d<=x-1; d++)
        {
            num[c][d]=0;
        }
    }
    for(i=1; i<=x*x; i++)
    {
        num[a][b]=i;
        a++;
        b++;
        if(a==x)
            a=0;
        if(b==x)
            b=0;
        while(num[a][b]!=0)
        {
            if(num[a][b]!=0)
            {
                if(a==0)
                    a=x;
                if(b==0)
                    b=x;
                if(b==1)
                    b=x-1;
                a--;
                b=b-2;

                if(b==-1)
                    b=x-1;
            }
            j++;
            if(j>=x*x)
                break;
        }
    }

    for (d=0; d<=x-1; d++)
    {
        for(c=0; c<=x-1; c++)
        {
            printf("%4d ",num[c][d]);
        }
        printf("\n");

    }

    //printf("Hello world!\n");
    return 0;
}
