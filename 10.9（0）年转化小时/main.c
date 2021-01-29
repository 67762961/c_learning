#include <stdio.h>
#include <stdlib.h>

int main()
{
    double second,year;
    int age;
    year=3.156e7;
    printf("Enter your age:");
    scanf("%d",&age);
    second=year*age;
    printf("You are %d age.\n",age);
    printf("So you are %e s old,too\n",second);

    return 0;
}

