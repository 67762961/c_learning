#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch=getchar();
    while(ch!='\n')
    {
        if(ch>='a'&&ch<='z')
        {
            printf("Ð¡Ð´×ÖÄ¸\n");
            break;
        }
        else if(ch>='A'&&ch<='Z')
        {
            printf("´óÐ´×ÖÄ¸\n");
            break;
        }
        else if(ch>=48&&ch<=57)
        {
            printf("Êý×Ö\n");
            break;
        }
        else
        {
            printf("·ûºÅ\n");
            break;
        }

    }
    ch=getchar();


//printf("Hello world!\n");||(ch>='A'&&ch<='Z')
    return 0;
}
