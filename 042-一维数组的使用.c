#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5];
    int i;
    scanf("%d",&a[0]);
    printf("a[0] = %d\n", a[0]);

    for ( i = 0; i < 5; ++i)
    {
        printf("%d\n", a[i]);
    }
    

    system("pause");
    return 0;
}