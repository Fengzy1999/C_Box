#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i = 5;
    int j = 8;
    int k;

    k = i & j;
    printf("%d\n",k);

    k = i && j; //k的值只能是1或
    printf("%d\n",k);

    system("pause");
    return 0;
}