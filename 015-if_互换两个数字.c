#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i = 3;
    int j = 5;
    int t;
    // //无法完成互换
    // i = j; //i = 5  j = 5
    // j = i; //i = 5  j = 5

    t = i;
    i = j;
    j = t;

    printf("i = %d,j = %d\n",i,j);

    system("pause");
    return 0;
}