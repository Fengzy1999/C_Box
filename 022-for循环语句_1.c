#include <stdio.h>
#include <stdlib.h>
//求0到100之间所有奇数的和
int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i < 100; i += 2)
    {
        sum = sum + i;
        // printf("A\n"); //看循环次数
    }
    printf("i = %d\n",i);
    printf("sum = %d\n",sum);

    system("pause");
    return 0;
}