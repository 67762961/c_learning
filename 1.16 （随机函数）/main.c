#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
    double x,sum;
    int n,i,sign,num;
    scanf("%d",&n);
    for(i=1,x=1,sum=4,sign=-1; x>1e-15; i++,sign=-sign)
    {
        x=4.0/(2*i+1);
        sum=sum+sign*x;
        num=(int)((sum-(int)sum)*100);
        if(num>=100)
            num=num%100;
        printf("%d",num);
    }

    return 0;
}
