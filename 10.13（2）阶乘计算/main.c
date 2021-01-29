#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,p=0;
    p=1;
    i=2;
    p=i*p;
    while (i<5)
    {
        i++;
        p=p*i;
    }


    printf("5!=%d\n",p);
    return 0;
}
