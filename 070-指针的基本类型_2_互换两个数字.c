#include<stdio.h>
#include<stdlib.h>

void swap_3(int *p,int *q)//形参名字是p和q，接收实参数据的是p和q
{
    int t;
    t = *p;
    *p = *q;
    *q = t;

}

int main(void)
{
    int a = 3;
    int b = 5;

    // swap_1(a,b);
    // swap_2(&a,&b);
    swap_3(&a,&b);
    printf("a = %d,b = %d\n",a,b);

    system("pause");
    return 0;
}

void swap_1(int i,int j)
{
    int t;
    t = i;
    i = j;
    j = t;

}
void swap_2(int *p,int *q)//形参名字是p和q，接收实参数据的是p和q
{
    int t;
    t = p;
    p = q;
    q = t;

}