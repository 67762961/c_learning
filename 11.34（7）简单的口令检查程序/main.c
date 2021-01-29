#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;
    int password=8888;
    printf("Please input password:");
    while(i<3)
    {
        if(i!=0)
        printf("Enter again:");
    scanf("%d",&x);
    if(x==password)
        {
            printf("You are welcome!\n");
            goto end;
        }
        else
        {
        printf("Wrong password!\n");
        i++;
        }
    }
    printf("You have entered three times! You are not welcome!\n");
    end:
        ;
    //printf("Hello world!\n");
    return 0;
}
