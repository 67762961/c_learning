#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    puts(str1);
    //printf("Hello world!\n");
    return 0;
}
