#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n=0,c=0,s=0,e=0;
    char string[50];
    gets(string);
    for(i=0;; i++)
    {
        if(string[i]=='\0')
            break;
        if(string[i]==' ')
            s++;
        else if((string[i]<='z'&&string[i]>='a')||(string[i]<='Z'&&string[i]>='A'))
            c++;
        else if(string[i]<=57&&string[i]>=48)
            n++;
        else
            e++;
    }
    printf("英文字符:%d\n数字字符:%d\n空格:%d\n其他字符:%d\n",c,n,s,e);
           return 0;
}
