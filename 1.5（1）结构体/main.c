#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct student_information
{
    int ID;
    char name[30];
    int score[8];
    float sum;
};

int main()
{
    struct student_information stu[3]={0000,"\04",{0,0,0,0,0,0,0,0},0.0};

    for(int i=0; i<3; i++)
    {
        scanf("%d%s",&stu[i].ID,stu[i].name);
        for(int j=0; j<6; j++)
        {
            scanf("%d",&stu[i].score[j]);
            if(j<4)
                stu[i].score[6]+=stu[i].score[j];
            else
                stu[i].score[7]+=stu[i].score[j];
        }
        stu[i].sum=(stu[i].score[6]
                    +stu[i].score[7])/6;
    }
    for(int i=0; i<3; i++)
    {
        printf("%8d%10s%20.1f\n",stu[i].ID,stu[i].name,stu[i].sum);
    }

    return 0;
}
/*
1111 tcc 10 10 10 10 10 10
2222 wzy 120 120 120 120 120 120
3333 cjy 100 100 100 100 100 100
*/
