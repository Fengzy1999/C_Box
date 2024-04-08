#include<stdio.h>
#include<stdlib.h>


//一定要明白出错原因，程序执行是按顺序执行
void f(void);//函数声明，分号不能丢
//void 表示没有返回值

int main(void)
{
    f();
    system("pause");
    return 0;
}

void f(void)
{
    printf("haha!\n");

}