#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char A[80],B[80],N[80]= {0};

void string_1(char a[])
{
    static char b[80];
    for(int i=1; i<strlen(a); i++)
    {
        b[i]=a[i];
    }
    strcpy(A,N);
    strcpy(A,b);
}

void string_end(char a[])
{
    static char b[80];
    b[1]=a[strlen(a)];
    strcpy(B,N);
    strcpy(B,b);
}


int main()
{
    char str[80],rts[80],m[80]= {0};
    gets(str);
    for(int i=0; strlen(str)>1; i++)
    {
        strcat(rts,B);
        strcpy(str,m);
        strcpy(str,A);
    }
    strcat(rts,B);
    printf("%s",rts);

    return 0;
}
