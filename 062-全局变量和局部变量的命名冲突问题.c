# include<stdio.h>
# include<stdlib.h>

int i = 99;

void f(int i)
{
    printf("i = %d\n",i);
}

int main(void)
{
    f(8);

    system("pause");
    return 0;
}