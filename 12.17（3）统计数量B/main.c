#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num=0,cha=0;
    char word[20];
    gets(word);
    for(int i=0; word[i]!='\0'; i++)
    {
        if(word[i]<=57&&word[i]>=48)
        {
            num++;
        }
        else if((word[i]<='Z'&&word[i]>='A')||(word[i]<='z'&&word[i]>='a'))
            cha++;
    }
    printf("%d:%d",num,cha);

    //printf("Hello world!\n");
    return 0;
}
