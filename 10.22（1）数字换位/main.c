#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,innum;
    int h,t,o;

    //  printf("Input a number betwin 100-999.\n");
    scanf("%d",&num);



    if ((100<=num)&&(999>=num))
    {
        h=num/100;
        t=(num/10)%10;
        o=num-100*h-10*t;
        innum=o*100+t*10+h;
        printf("%d\n",innum);
    }
    else
    {
        printf("Please input a number betwin 100-999!\n")  ;

    }

    return 0;
}
