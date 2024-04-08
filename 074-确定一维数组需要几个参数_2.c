#include<stdio.h>
#include<stdlib.h>
/*
    一定要明白10行的pArr[3] 和12行 14行的a[3]是同一个变量
*/
void f(int  *pArr,int len)
{
    pArr[3] = 88;//6行
}
int main(void)
{
    int a[6] = {1,2,3,4,5,6};

    printf("%d\n",a[3]); //12行
    f(a,6);
    printf("%d\n",a[3]); //14行


    system("pause");
    return 0;
}