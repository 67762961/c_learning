#include <stdio.h>
#include <stdlib.h>

int main()
{
    //输完ch1 ch2 之后键入的回车会赋给ch3 不会等待键入ch3
    char ch1,ch2,ch3;
    scanf("%c%c",&ch1,&ch2);//          解法一   此句改为scanf("%c%c%*c",&ch1,&ch2);舍弃第三个键入字符
    printf("char=%c,%d\n",ch1,ch1);
    printf("char=%c,%d\n",ch2,ch2);//   解法二   此处加入   fflush(stdin);   清除之前存储数据
    scanf("%c",&ch3);
    printf("char=%c,%d\n",ch3,ch3);
    /*int型变量可控制舍弃位数
    scanf("%3d%2d%3",&x,&y);
    前3位赋值给x 中间2位舍弃 后3位赋值给y
    */
    return 0;
}
