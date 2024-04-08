/*
    判断十个数字是否是素数
    只用一个函数实现，不好，代码的利用率不高
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int val;
    int i;

    scanf("%d",&val);
    for(i=2;i<val;++i)
    {
        if(0 == val%i)
            break;
    }
    if (i == val)
        printf("Yes!\n");
    else
        printf("No!\n");
    
    system("pause");
    return 0;
}