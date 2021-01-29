#include<stdio.h>
#include<string.h>

void SORTSTR(char arr[][20], int n);//声明排序函数


int main()
{
    int n = 5;
    char words[n][20];//定义n阶数组
    printf("please input %d words:\n", n);
    for (int i = 0; i <= n - 1; i++)
    {
        gets(words[i]);//依次将键入的字符串 赋值进入数组的各行
    }
    SORTSTR(words, n);//进行排序
    printf("the sorted words:\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%s\n",words[i]);//依次输出排序完成后的每一排数组内容（字符串）
    }
}

void SORTSTR(char arr[][20], int n)
{
    int a,b;
    char c[20];
    for(a=0; a<n-1; a++)
    {
        for(b=0; b<n-1; b++)
        {
            if(strcmp(arr[b],arr[b+1])>0)//若str1==str2 则返回零 若str1<str2 则返回负数;若str1>str2，则返回正数
                strcpy(c,arr[b+1]);//strcpy(目的字符串,源字符串)  string copy：将源字符串赋值给目的字符串
            strcpy(arr[b+1],arr[b]);
            strcpy(arr[b],c);
        }
    }
}
}
