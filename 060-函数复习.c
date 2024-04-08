#include<stdio.h>
#include<stdlib.h>

void f(int i);

void g(void)
{
    f(5);
}

int f(int i)
{
    // int i = 99; 
    //此处定义的i不合理，同一函数范围内被重复定义
    printf("i = haha\n",i);
    return ;

}

int main(void)
{
    int i = 10;
    f(i);
    g();
    system("pause");
    return 0;
}