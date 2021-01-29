#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,i,x;
scanf("%d",&x);
for(i=0,sum=0;i<=x;i++)
 {
     if(i%7==0||i%10==7)
        sum=sum+i;
 }
 printf("%d",sum);
 //printf("Hello world!\n");
    return 0;
}
