#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int j;
    int k;
    int m;

    i = j = 3;
    k = i++;
    m = ++j;

    printf("i = %d,j = %d,k = %d,m = %d", i, j, k, m);
    system("pause");
    return 0;
}
/*
 i = 4,j = 4,k = 3,m = 4
*/