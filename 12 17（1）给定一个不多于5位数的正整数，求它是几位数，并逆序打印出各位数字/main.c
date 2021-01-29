#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Digit[5],i;
    int num=0,Num;//原数字
    int digit=1;//位数
    scanf("%d",&num);
    Num=num;
    for(digit=0;Num>=10;digit++)
    {
    Num=Num/10;
    }
    digit=digit+1;
    printf("%d\n",digit);
    Digit[0]=num%10;
    Digit[1]=(num%100-Digit[0])/10;
    Digit[2]=(num%1000-Digit[0]-10*Digit[1])/100;
    Digit[3]=(num%10000-Digit[0]-10*Digit[1]-100*Digit[2])/1000;
    Digit[4]=(num-Digit[0]-10*Digit[1]-100*Digit[2]-1000*Digit[3])/10000;
    for(i=0;i<digit;i++)
    {
        printf("%d",Digit[i]);
        if(i<digit-1)
            printf(",");
    }
    return 0;
}
