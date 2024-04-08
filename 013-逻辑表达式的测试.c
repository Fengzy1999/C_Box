#include<stdio.h>
#include<stdlib.h>

//重点理解范围问题
int main(void)
{   
    float score = 0;
    int i = (90<=score<=100);
//90 < = score 无论真假，0/1都小于100
//则判断永远为真
    printf("%d\n",i);

    system("pause");
    return 0;
}
