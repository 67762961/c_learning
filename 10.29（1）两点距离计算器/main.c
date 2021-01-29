#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2;
    float distance;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.3f\n",distance);
    return 0;
}
