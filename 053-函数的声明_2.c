#include<stdio.h>
#include<stdlib.h>

//void f(void);//函数声明，分号不能丢

void g(void);
//void 表示没有返回值
{
    f(); //因为函数f的定义调用f语句的后面，所以语法会出错
}

void f(void);//函数声明，分号不能丢
//void 表示没有返回值
{
    printf("haha\n");
}
int main(void)
{
    g();
    system("pause");
    return 0;
}
