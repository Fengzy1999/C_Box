#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j;
    for(i=0;i<3;++i)
    {
        for(j=1;j<4;++j)
            break;//break只能终止离他最近的循环
        printf("haha\n");
    }
    
    system("pause");
    return 0;
}