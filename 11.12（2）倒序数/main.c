#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,innum;
    int h,t,o,s;

    //  printf("Input a number betwin 100-999.\n");
    scanf("%d",&num);


    s=num/1000;
    h=(num-1000*s)/100;
    t=(num-1000*s-100*h)/10;
    o=num-100*h-10*t-1000*s;
    innum=o*1000+t*100+h*10+s;
    printf("%d\n",innum);


    return 0;
}
