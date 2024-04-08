#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;

    for (i = 0; i < 3; ++i)
    {   
        printf("111\n");
        for(j=2;j<5;++j)
        {   
            printf("222\n");
            printf("333\n");
        }
        printf("444\n");
    }

    system("pause");
    return 0;
}

/*
111
222
333
222
333
222
333
444
111
222
333
222
333
222
333
444
111
222
333
222
333
222
333
444
*/