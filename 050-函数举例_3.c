#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsPrime(int val)
{
    int i;
    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;
    }
    if (i == val)
        return true; //return会终止函数
    else
        return false;
}
int main(void)
{
    int m;
    int i;
    scanf("%d",&m);

    if (IsPrime(m))
        printf("Yes!\n");
    else
        printf("No!\n");

    system("pause");
    return 0;
}