#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,j;
    for(i=1; 10>=i; i++)
    {
        for(j=1; 10>=j; j++)
        {
            m=j*i;
            if(7==m||27==m||72==m||70==m)//逢7不过（不显示数字 显示空格）
            {
                printf("%5c",32);
                continue;
            }
            printf("%5d",m);

        }
        printf("\n");
    }

    return 0;
}
// printf("Hello world!\n");
