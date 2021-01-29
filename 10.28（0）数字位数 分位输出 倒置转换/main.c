#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include"zylib.h"
int main()
{
    int num=0;//原数字
    int num1,num2,num3,num4,num5,num6=0;
    int digit=1;//位数
    int digit1,digit2;
    char DIGIT1,DIGIT2;
    //one[]="个",//B8F6 184 246
    //ten[]="十",//CAAE 202 174
    //hundred[]="百",//B0D9 176 217
    //thousand[]="千",//C7A7 199 167
    //tenthousand[]="万";//CDF2 205 242
    //int o=0xB8F6,t=0xCAAE,h=0xB0D9,th=0xC7A7,tth=0xCDF2;
    /*  int A=0xA7;
      printf("%d",A)*/

    printf("Input a number between 10 to 10000.\n");
    scanf("%d",&num);
    while(((num<10)||(num>10000)))
    {
        fflush(stdin);
        printf("Error! Please input a number between 10 to 10000.\n");
        scanf("%d",&num);

    }

    num1=num;
    do
    {
        digit++;
        num1=num1/10;
    }
    while(num1>=10);
    printf("位数为%d\n",digit);
    num2=num;
    num3=num;
    digit1=digit;
    int i=1;
    do
    {
        num2=num2/10;
        num5=num2*10;
        num4=num3-num5;
        num3=num2;
        if((digit+1-digit1)==1)
        {
            DIGIT1=184;
            DIGIT2=246;
        }
        else if((digit+1-digit1)==2)
        {
            DIGIT1=202;
            DIGIT2=174;
        }
        else if((digit+1-digit1)==3)
        {
            DIGIT1=176;
            DIGIT2=217;
        }
        else if((digit+1-digit1)==4)
        {

            DIGIT1=199;
            DIGIT2=167;
        }
        else if((digit+1-digit1)==5)
        {

            DIGIT1=205;
            DIGIT2=242;
        }
        printf("%c%c位为%d\n",DIGIT1,DIGIT2,num4);

        digit1--;
        i++;
    }
    while(digit1>0);
    num2=num;
    num3=num;
    digit1=digit;
    digit2=digit;

    do
    {
        num2=num2/10;
        num5=num2*10;
        num4=num3-num5;
        num3=num2;
        num6=num6*10+num4;
        digit2--;
        i++;
    }


    while(digit2>0);
    if(num6==num)
    {

        printf("倒置后相同\n");

    }
    else

    {
        printf("倒置后不相同\n");
    }

    printf("倒置后为%d\n",num6);


    // printf("%d\n",num);*/
    return 0;
}
