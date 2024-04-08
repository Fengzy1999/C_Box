#include<stdio.h>
#include<stdlib.h>

int f(int i,int j)
{
    return 100;
    // return 88;
}

void g(int *p,int *q)
{
    *p = 1;
    *q = 2;
}

int main(void)
{
    int a = 3,b = 5;
    g(&a,&b);

    // a = f(a,b);
    // b = f(a,b);

    printf("%d , %d\n",a,b);

    system("pause");
    return 0;
}