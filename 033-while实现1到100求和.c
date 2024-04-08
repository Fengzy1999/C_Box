#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int sum = 0;
    int i = 1;
    while(i<101)
    {
        sum  = sum + i;
        ++i;
    }
    printf("sum = %d\n",sum);
    system("pause");
    return 0;
}
