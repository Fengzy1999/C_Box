#include <stdio.h>
#include <stdlib.h>
/*
    斐波拉契数列
    1 2 3 5 8 13 21 34
*/
int main(void)
{
    int n;
    int f1, f2, f3;
    int i;
    
    f1 = 1;
    f2 = 2;

    printf("请输入您需要的序列：");
    scanf("%d", &n);

    if (1 == n)
    {
        f3 = 1;
    }
    else if (2 == n)
    {
        f3 = 2;
    }
    else
    {
        for (i = 3; i <= n; ++i)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("%d\n", f3);
    system("pause");
    return 0;
}

/*
试数：n=6
1> i=3 3<=6 成立
   f3=1+2=3 f1=f2=2 f2=f3=3 ++i i=4
2> i=4 4<=6 成立
   f3=2+3=5 f1=3 f2=5 ++i i=5
3> i=5 5<=6 成立
   f3=3+5=8 f1=5 f2=8 ++i i=6
4> i=6 6<=6 成立
   f3=5+8=13 f1=8 f2=13 i=7
5> i=7 7<=6不成立
*/