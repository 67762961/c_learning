#include <stdio.h>
#include <stdlib.h>

int ReverseInt(int n, int m)
{
    int w;
    if (n > 0)
    {
        w=n%10;
        n=(n-w)/10;
        m=m*10+w;
        return ReverseInt(n,m);
    }
    else
        return m;
}
int main()

{
    int n;
    scanf("%d", &n);
    printf("%d",ReverseInt(n,0));
    return 0;
}
