#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,ans;
    scanf("%d",&i);
    num=(i+1)/2;
    for(j=1,ans=0;j<=i;j=j+2)
    {
        ans=ans+j;
    }
    printf("%d:%d",num,ans);
    return 0;
}
