#include<stdio.h>
#include<stdlib.h>

int f()
{
    return 10.5; 
    //因为函数的返回值类型是int，
    //所以最终f返回的是10而不是10.5
}

int main(void)
{
    int i = 99;
    double x = 6.6;

    x = f();
    printf("%lf\n",x);

    system("pause");
    return 0;
}