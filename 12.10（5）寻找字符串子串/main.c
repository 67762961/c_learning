#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,j=0,x=0;
    char a[50],b[50],c[50];
    for(i=0; i<50; i++)
    {
        a[i]='\0';
        c[i]='\0';
        b[i]='\0';
    }
    gets(a);
    gets(b);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]==b[0])
        {
            x=i;
            for(j=0; j<strlen(b); j++,i++)
            {
                c[j]=a[i];
            }
        }
        if(strcmp(b,c)==0)
        {
            printf("%d\n",x+1);
            break;
        }
    }
    if(i>=strlen(a))
        printf("-1\n");
    //printf("Hello world!\n");
    return 0;
}
