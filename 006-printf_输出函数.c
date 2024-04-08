/* 
    2022/5/7
    测试printf的各种用法
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    // printf("hahahaha\n"); //\n表示换行

    // int i = 9;
    // printf("%d\n",i); //d表示为十进制

    // int j = 3;
    // int k = 5;
    // printf("%d %d\n",j,k);
    // printf("%d\n",j,k);//输出控制符与输出参数不匹配
    
    // % 相关用法

    // int x = 47 ; //100是十进制

    // printf("%x\n",x); // 2f
    // printf("%X\n",x); // 2F
    // printf("%#X\n",x); //0X2F
    // printf("%#x\n",x); //0x2f
    
    int x1 = -124 ; //100是十进制
    int x2 = 116;
    unsigned int y1 = x1;
    float f1 = x1;
    int z1 = x1 + x2;
    int z2 = x1 - x2;


    printf("%d\n",x1);
    printf("%d\n",x2);
    printf("%d\n",y1);
    printf("%d\n",f1);
    printf("%d\n",z1);
    printf("%d\n",z2);

    system("pause");
    return 0;
}