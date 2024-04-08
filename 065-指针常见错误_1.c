#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int * p;
    int i = 5;
    
    *p = i;
    printf("%d\n",*p);
    system("pause");
    return 0;
}