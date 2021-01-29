#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=0,c;
    c=(f-32)*5/9;
    while(f<=300)
    {
        c=(f-32)*5/9;
        printf("%3d %3d\n",f,c);
        f=f+20;
    }
    //printf("Hello world!\n");
    return 0;
}
