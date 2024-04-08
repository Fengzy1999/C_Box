#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (i = 1; i < 101; ++i)
    {
        if (i % 2 == 1)
        {//奇数
            sum1 += i;
            ++cnt1;
        }
        else
        {//偶数
            sum2 += i;
            ++cnt2;
        }
    }
    printf("1到100的奇数个数为:%d\n", cnt1);
    printf("1到100的奇数和为:%d\n", sum1);
    printf("1到100的偶数个数为:%d\n", cnt2);
    printf("1到100的偶数和为:%d\n", sum2);

    system("pause");
    return 0;
}