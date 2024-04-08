#include<stdio.h>
#include<stdlib.h>

int f(void) //括号中的void表示该函数不能接收数据，int表示函数返回值是int类型
{
    return 10; //像主函数返回10

}

int main(void)
{
    int j = 88;
    j = f();
    printf("%d\n",j);

    system("pause");
    return 0;
    
}