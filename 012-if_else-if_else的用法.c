#include<stdio.h>
#include<stdlib.h>

//重点理解范围问题
int main(void)
{   
    double delta = -1;

    if(delta > 0)
        printf("有两个解\n");
        // printf("哈哈哈\n");
    else if(delta == 0)
        printf("有一个唯一的解\n");
    else
        printf("无解\n");
    system("pause");
    return 0;
}
