#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch=getchar();
    while(ch!='\n')
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            ch=ch+4;
            if((ch>='z'&&ch<='z'+4)||(ch>='Z'&&ch<='Z'+4))
                ch=ch-26;
        }
        printf("%c",ch);
        ch=getchar();
    }

    //printf("Hello world!\n");
    return 0;
}
