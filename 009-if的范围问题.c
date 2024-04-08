#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    if(1 > 2)
    {
        printf("AAAA\n");
        printf("BBBB\n");
    }
    printf("CCCC\n");
    system("pause");
    return 0;
}
/* 
输出结果为  CCCC
if默认只能控制一个语句的执行
if控制范围可以有{}进行限定
*/