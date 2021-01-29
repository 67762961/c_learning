#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50];
    int num,num_,n0=0,n1=0;
    scanf("%d",&num);
    for(int i=0;num_!=0;i++)
    {
        a[i]=num%2;
        if(a[i]==1)
            n1++;
        else
            n0++;
        num_=num_/2;
    }
    if(n0<n1)
        printf("%d是A类数", num);
    else
        printf("%d是B类数", num);
    //printf("Hello world!\n");
    return 0;
}
