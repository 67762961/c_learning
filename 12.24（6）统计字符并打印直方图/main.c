#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[80],num=0,en=0,cha=0,spa=0;
    gets(a);
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]==' ')
            spa++;
        else if(a[i]<='9'&&a[i]>='0')
            num++;
        else if ((a[i]<='Z'&&a[i]>='A')||(a[i]<='z'&&a[i]>='a'))
            en++;
        else
            cha++;
    }
    printf("^\n");
    printf("|\n");
    printf("|");
    for(int i=0; i<en; i++)
    {
        printf("*");
    }
    printf(" ×ÖÄ¸(%d)\n",en);
    printf("|\n");
    printf("|");
    for(int i=0; i<num; i++)
    {
        printf("*");
    }
    printf(" Êý×Ö(%d)\n",num);
    printf("|\n");
    printf("|");
    for(int i=0; i<cha; i++)
    {
        printf("*");
    }
    printf(" ·ûºÅ(%d)\n",cha);
    printf("|\n");
    printf("|");
    for(int i=0; i<spa; i++)
    {
        printf("*");
    }
    printf(" ¿Õ¸ñ(%d)\n",spa);
    printf("|\n");
    printf("------------------------------------------------->");






    //printf("Hello world!\n");
    return 0;
}
