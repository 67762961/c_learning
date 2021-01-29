#include <stdio.h>

// 字符串长度
int mystrlen(char s[])
{
    int cnt;
    for(cnt=0; s[cnt]!='\0'; cnt++);
    return cnt;
}

// 比较字符串
int mystrcmp(char s1[], char s2[])
{
    for(int i=0;i<=mystrlen(s1)||i<=mystrlen(s2); i++)
    {
        if(s1[i]>s2[i])
        {
            return -1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    char s1[80];
    char s2[80];
    gets(s1);
    gets(s2);
    int n = mystrcmp(s1, s2);
    //printf("%d",n);
    switch(n)
    {
    case -1:
        printf("\"%s\">\"%s\"",s1,s2);
        break;
    case 0:
        printf("\"%s\"=\"%s\"",s1,s2);
        break;
    default:
        printf("\"%s\"<\"%s\"",s1,s2);
    }
    return 0;
}
