#include <stdio.h>
#include <stdlib.h>
void sort(int a[])
int main()
{

    //printf("Hello world!\n");
    return 0;
}
void sort(int a[])
{
    int i,j,t,k;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[k]>a[j])
            {
                k=j;

            }
        }
        t=a[k];
        a[k]=a[i];
        a[i]=t;
    }

}
