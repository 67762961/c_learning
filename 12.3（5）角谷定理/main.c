#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,x;
    scanf("%d",&x);
    while (1!=x)
    {
        printf("%d ",x);
        if (1==x%2)
        {
            x=x*3+1;
        }
        else
        {
            x=x/2;
        }

        i++;
    }
    printf("1 ");
    printf("\nSTEP=%d",i+1);
    //printf("Hello world!\n");
    return 0;
}
