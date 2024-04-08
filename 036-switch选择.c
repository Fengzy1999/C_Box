#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int val;

    printf("请输入楼层号：");
    scanf("%d",&val);

    switch(val)
    {
        case 1:
            printf("1楼 \n");
            break;
        case 2:
            printf("2楼\n");
            break;
        case 3:
            printf("3楼\n");
            break;
        default:
            printf("无此楼层");
            break;
    }
    
    system("pause");
    return 0;
}