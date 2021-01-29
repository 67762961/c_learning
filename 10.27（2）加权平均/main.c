#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char ch1,ch2;
    int boys=0,girls=0,Bs=87,Gs=85;
    float avrage=0;
    scanf("%d%d",&boys,&girls);
    avrage=((float)(boys*Bs+girls*Gs)/(float)(boys+girls));
    printf("%.1f\n",avrage);

    return 0;
}
