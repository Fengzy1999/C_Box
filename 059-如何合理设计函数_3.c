/*
    求1到某个数字之间（包括该数字）所有的素数，并将其输出
    只用main函数实现，有局限性：
        代码的重用性不高
        代码不容易理解
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int val;
    int i;
    int j;

    scanf("%d",&val);  
    for ( i = 2; i < val; ++i)
    {
        //判断i是否是素数，是输出，不是不输出
        for ( j = 2; j < i; ++j)
        {
            if(0 == i%j)
                break;
        }
        if(j == i)
            printf("%d\n",i);
        
    }
    
    system("pause");
    return 0;

}