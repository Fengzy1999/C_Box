#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int cnt = 0; //个数一般用cnt表示

    for(i = 1;i<101;++i)
    {
        if(i%2 == 1)
            ++cnt;//sum = sum + i
    }
    printf("1到100的奇数个数为：%d\n",cnt);
    system("pause");
    return 0;
}