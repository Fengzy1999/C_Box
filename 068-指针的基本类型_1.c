#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int * p;//等价于int *p；也等价于 in *p
    int i = 5;
    char ch ='A';

    p = &i; //*p 以p的内容为地址的变量
    *p = 99;

    printf("i = %d,*p = %d\n",i,*p);

    // p = &ch;
    // p = ch; //ERROR
    // p = 5; //ERROR

    system("pause");
    return 0;
}