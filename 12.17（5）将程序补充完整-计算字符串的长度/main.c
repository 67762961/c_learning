#include <stdio.h>

int mystrlen(char s[])
{
    int cnt;
    for(cnt=0;s[cnt]!='\0';cnt++);
    return cnt;
}

int main()
{
    char s[80];
    gets(s);
    int i=mystrlen(s);
    printf("\"%s\" have %d character.",s,i);
    return 0;
}
