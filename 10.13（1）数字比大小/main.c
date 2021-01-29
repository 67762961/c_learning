#include <stdio.h>
#include <stdlib.h>
int max (int x,int y);  //函数原形及声明 后接分号
int min (int x,int y);
int main()
{
    int a=0,b=0,c=0,d=0;
    printf("Please enter a and b.\n");
    scanf("%d%d",&a,&b);//键入要加& （取用内存地址） 输出则不需要
    c=min(a,b);
    d=max(a,b);
    printf("min=%d\n",c);
    printf("max=%d\n",d);
    return 0;
}

//函数定义
int max (int x,int y) //函数首部(首部后面不加分号)

{
    int tt;
    if (x>=y)
        tt=x;
    else
        tt=y;
    return tt;
}
int min (int x,int y)
{
    int kk;
    if (x>=y)
        kk=y;
    else
        kk=x;
    return kk;
}



















