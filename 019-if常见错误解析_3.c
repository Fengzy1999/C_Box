#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    if (3 > 2)
        printf("AAA\n");
    else if(2 > 5)
        printf("BBB\n");
    else
        (5 > 10);  //无实际意义的语句
    printf("CCC\n");
    /*
    else (5 > 10);  //无实际意义的语句
    printf("CCC\n");
    等价于
    else
        (5 > 10);  //无实际意义的语句
        printf("CCC\n");
    */
    system("pause");
    return 0;
}