#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("输入一个年份\n");
    int year;
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 ==0))
    {
        printf("%d是闰年\n",year);
    }
    else
    {
        printf("%d不是闰年\n",year);
    }
    //printf("Hello world!\n");
    return 0;
}
