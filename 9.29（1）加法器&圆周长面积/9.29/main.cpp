#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{/* int a=0,b=0,c=0;
printf("%d %d %d",a, b, c);
scanf("%d%d",&a,&b);
c=a+b;
printf("%d\n",c);
printf("Hello World!\n");*/
float  r=0;
double c=0,s=0;
scanf("%f",&r);
c=2*PI*r;
s=PI*r*r;
printf("周长=%f\n",c);
printf("面积=%f",s);
return 0;
}
