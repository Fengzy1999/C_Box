#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int * p;//p是变量的名字，int * 表示p变量存放的是int类型变量的地址
    int i = 3;

    p = &i; //OK
    p = i; //ERROR,因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值

    p = 55;//ERROR,原因同上
    
    system("pause");
    return 0;
}