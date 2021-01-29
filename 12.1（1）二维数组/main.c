#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    int a[2][3] = {{1,2,3},{4,5,6}},b[3][2];//第二维长度永远不能省略
    while(i<=1)
    {
        while(j<=2)
        {
            printf("%3d",a[i][j]);
            b[j][i]=a[i][j];
            j++;
        }
        printf("\n");
        i++;
        j=0;
    }
    printf("\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=1; j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }


    //printf("Hello world!\n");
    return 0;
}
