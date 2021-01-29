#include <stdio.h>

// ×Ö·û´®³¤¶È
int mystrlen(char s[])
{
    int i,x;
    for(i=0;i<80;i++)
    {
        if (s[i]=='\0')
        {
            x=i;
            break;
        }
    }
    return x;
}

// ¸´ÖÆ×Ö·û´®
void mystrcpy(char dest[], char src[])
{
    for(int i=0;i<mystrlen(src);i++)
    {
        dest[i]=src[i];
    }
}

// Á¬½Ó×Ö·û´®
void mystrcat(char dest[], char src[])
{
    int x=mystrlen(dest);
    for(int o=0;o<=mystrlen(src);o++)
    {
        dest[x+o]=src[o];
    }
}

int main()
{
    char s1[80]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char s2[80]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char s3[80]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    gets(s1);
    gets(s2);
    mystrcpy(s3, s1);
    mystrcat(s3, s2);
    printf("\"%s\"+\"%s\"=\"%s\"",s1,s2,s3);
    return 0;
}
