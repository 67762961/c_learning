#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num=101;
    int i=sqrt(num),j,m=0;
    for(num=101; num<=200; num++,i=sqrt(num))
    {
        for(j=2; j<=i; j++)
        {
            if(num%j==0)
            {
                goto end;
            }
        }
        printf("%5d",num);
        m++;
        if(m%5==0)
            printf("\n");
end:
        ;

    }
    //printf("Hello world!\n");
    return 0;
}
