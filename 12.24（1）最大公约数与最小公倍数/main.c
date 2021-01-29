#include <stdio.h>
#include <stdlib.h>

int yue(int x,int y)
{
    int q;
  if(x%y==0)
    return y;
  else
  {
    q=x%y;
    x=y;
    y=q;
    return yue(x,y);
  }
}

int main()
{
    int a,b,q;
    scanf("%d %d",&a,&b);
    q=yue(a,b);
    printf("%d %d",q,a*b/q);
    return 0;
}
