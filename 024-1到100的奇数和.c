#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int sum = 0;

    for(i = 1;i<101;++i)
    {
        if(i%2 == 1)
            sum +=i;//sum = sum + i
    }
    printf("1到100的奇数之和为：%d\n",sum);
    system("pause");
    return 0;
}