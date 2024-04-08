#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("%d %d %d %d %d %d \n",3%3,13%-3,-13%3,-13%-3,-13%23,3%5);
    system("pause");
    return 0;
}

/* 0 1 -1 -1 -13 3 */