#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int a[5];//a是数组名 5是数组元素个数 元素就是变量 a[0]--a[4]
    // int a[3][4];//3行4列 a[0][0]是第一个元素 a[i][j]是第i+1行j+1列

    int b[5];
    // a = b;//error a是常量
    printf("%#X\n",&a[0]);
    printf("%#X\n",&a);


    system("pause");
    return 0;
}
/*
输出结果：
        0X61FE00
        0X61FE00
        请按任意键继续. . .

	一维数组名
		一维数组名是个指针常量
		它存放的是一维数组第一个元素的地址
*/