#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num[5][5];
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    int sum,su;
    sum=num[0][0]+num[0][4]+num[1][1]+num[2][2]+num[3][3]+num[4][4]+num[1][3]+num[3][1]+num[4][0];
    su=num[0][0]*num[4][0]*num[0][4]*num[2][2]*num[4][4];
    printf("%d:%d",sum,su);
    return 0;
}
