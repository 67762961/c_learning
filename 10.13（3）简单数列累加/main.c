#include <stdio.h>
#include <stdlib.h>

int main()
{
    double term=1,sum=0,deno=1;//term 为当前项 sum为和 deno为分母
    int sign=1;
    while(deno<=100)
    {
        term=sign*term;
        sum=sum+term;
        deno++;
        term=1.0/deno;
        sign=sign*(-1);
    }
    printf("sum=%f\n",sum);
    return 0;
}
