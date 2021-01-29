#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,t;
    printf("PLease input a b c .\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a-b>=10e-15&&a-c>=10e-15)
    {
        if(b-c>=10e-15)
        {
            ;
        }
        else
        {
            t=b;
            b=c;
            c=t;
        }
    }
    else if(b-c>=10e-15&&b-a>=10e-15)
    {
        t=a;
        a=b;
        b=t;
        if((b-c>=10e-15))
        {
            ;
        }
        else
        {
            t=b;
            b=c;
            c=t;
        }
    }
    else
    {
        t=a;
        a=c;
        c=t;
        if((b-c>=10e-15))
        {
            ;
        }
        else
        {
            t=b;
            b=c;
            c=t;
        }
    }



    printf("%lf<%lf<lf\n",c,b,a);

    return 0;
}
