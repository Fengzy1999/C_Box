#include<stdio.h>
#include<stdlib.h>

//f函数可以输出任何一个一维数组的内容
void f(int * pArr,int len)
{
    int i;
    for ( i = 0; i < len; ++i)
        printf("%d  ",pArr[i]);//*(pArr+1) 等价于 pArr[i] 也等价于 b[i] 也等价于 *(b+i)
    printf("\n");

    
}

int main(void)
{
    int b[6] = {-1,-2,-3,4,5,-6};

    f(b,6);
    
    system("pause");
    return 0;
}