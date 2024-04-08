/*
    求1到某个数字之间（包括该数字）所有的素数，并将其输出
    用一个函数来判断一个数字是不是素数
    优点：
        代码可读性相比例子三更高
        代码的可重用性比例子三高
    缺点：
        可重用性仍然不高
        比如求1000个数字，求它们每个数字从1到它本身的素数
        则
            for ( i = 2; i < val; ++i)
                {
                    if(IsPrime(i))
                        printf("%d\n",i);
                }
        要写1000次
    
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

int main(void)
{
    int val;
    int i;

    scanf("%d",&val);
    for ( i = 2; i < val; ++i)
        {
            if(IsPrime(i))
                printf("%d\n",i);
        }

    system("pause");
    return 0;

}