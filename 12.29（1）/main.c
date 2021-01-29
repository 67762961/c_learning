#include <stdio.h>
#include <stdlib.h>

void exchange(int arr[],int n);
void exchange_p(int *p,int n);

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},num=9;
    exchange(a,num);
    for(int i=0;i<num;i++)
    {
    printf("%d\n",a[i]);
    }
    //printf("Hello world!\n");
    return 0;
}
void exchange(int arr[],int n)
{
    int dat;
    for(int i=0;i<=n/2;i++)
    {
        dat=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=dat;
    }
}
/*
void exchange_p(int *p,int n)
{
    int dat;
    for(int *p1=p;p1<p+n/2;p1++)
    {
        dat=*p1;
        *p1=*(p+n+p-p1);
        *(p+n+p-p1)=dat;
    }
}
*/
