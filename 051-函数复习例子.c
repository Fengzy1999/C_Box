#include<stdio.h>
#include<stdlib.h>

int f(int i)
{
    return 10;
}
//void表示没有返回值
int main(void)
{
    float i = 99.9;
    printf("%f\n",i);
    i = f(5);
    printf("%f\n",i);
    
    system("pause");
    return 0;
}