#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d\n",a,b);
    return 0;
}
