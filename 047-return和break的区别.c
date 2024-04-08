#include<stdio.h>
#include<stdlib.h>

void f(void)
{
    int i;

    for(i = 0;i<5;++i)
    {
        printf("大家辛苦了！\n");
        // break;  //输出两句
        return;  //只输出大家辛苦了
    }
    printf("同志们好！\n");
}

int main(void)
{
    f();

    system("pause");
    return 0;
}