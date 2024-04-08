#include <stdio.h>
#include <stdlib.h>

//求0到100之间所有的能被3整除的数字之和

int main(void)
{
    int i;
    int sum = 0;

    for (i = 3; i <= 10; ++i)
    {
        if(i%3 == 0)
            sum = sum + i;
        printf("sum = %d\n",sum);
        // printf("A\n"); //输出几个A看循环次数
    }
    /*试数过程
    i -> 3 4 5 6 7 8 9  10 11
    sum= 3 3 3 9 9 9 18 18 end
    */
    // printf("sum = %d\n",sum);

    system("pause");
    return 0;
}