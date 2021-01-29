#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    scanf("%f",&score);
    int grade;
    grade=score/10;
    if(0-score>10e-6||100-score<10e-6)
    {
        printf("请输入0-100以内的数");
    }

    else
    {
        switch(grade)
        {
        case 10:
        case 9:
            printf("成绩%g属于A等级",score);
            break;
        case 8:
            printf("成绩%g属于B等级",score);
            break;
        case 7:
            printf("成绩%g属于C等级",score);
            break;
        case 6:
            printf("成绩%g属于D等级",score);
            break;
        default:
            printf("成绩%g属于E等级",score);
        }
    }
    return 0;


}


