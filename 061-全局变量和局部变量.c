#include<stdio.h>
#include<stdlib.h>
//明白出错原因，把g函数的定义放在了k全局变量的前面了
int k = 1000;

void g()
{
    printf("k = %d\n",k);
}
void f(int i)
{
    int j = 20;
    printf("k = %d\n",k);
}
int main(void)
{
    f(88);
    system("pause");
    return 0;
}