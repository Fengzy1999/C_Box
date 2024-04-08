/*
    用两个函数来实现求1到某个数字之间所有的素数，并将其输出
    本程序和例子4比较
    代码量更少，可重用性更高
    
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//本函数的功能是判断m是否是素数，是返回true，否返回false
bool IsPrime(int m)
{
    int i;
    for ( i = 2; i < m; ++i)
    {
        //判断i是否是素数，是输出，不是不输出
        if(0 == m%i)
            break;
    }
    if(i == m)
        return true;
    else
        return false;
}

//本函数的功能是把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)
{
    int i;
    for ( i = 2; i < n; ++i)
    {
        if(IsPrime(i))
            printf("%d\n",i);
    }
    
}
int main(void)
{
    int val;
    int i;

    scanf("%d",&val);
    TraverseVal(val);
    
    system("pause");
    return 0;

}