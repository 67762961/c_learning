#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0,sum=0,num[20];
    for(i=0; i<20; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]>=0)
        {
            j++;
            sum+=num[i];
        }
    }

    printf("%d:%d\n",j,sum);

    //printf("Hello world!\n");
    return 0;
}
