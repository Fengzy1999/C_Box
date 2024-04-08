#include<stdio.h>
#include<stdlib.h>

void f(int i)
{
    i = 99;
}

int main(void)
{
    int i = 6;
    printf("i = %d\n",i);
    f(i);
    printf("i = %d\n",i);

    system("pause");
    return 0;
}
