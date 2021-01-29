#include <stdio.h>

int monkey(int n)
{
    if (n == 1)
        return 1;    // 最后一天只剩一个桃子
    else
    {
        n--;
        return (monkey(n)+1)*2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", monkey(n));
    return 0;
}
