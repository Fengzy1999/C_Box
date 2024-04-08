#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int sum = 0;
    int cnt = 0;
    float avg;//average的缩写
    for (i = 1; i < 101; ++i)
    {
        if (i % 2 == 1)
        {
            sum += i; // sum = sum + i
            ++cnt;
        }
    }
    avg = 1.0*sum/cnt;//1.0默认是double类型
    printf("1到100的奇数之和为：%d\n", sum);
    printf("1到100的奇数个数为：%d\n", cnt);
    printf("1到100的奇数平均值为：%f\n", avg);
    system("pause");
    return 0;
}