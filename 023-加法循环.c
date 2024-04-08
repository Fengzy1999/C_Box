#include <stdio.h>
#include <stdlib.h>
//求0到100之间所有奇数的和
int main(void)
{
    int i;
    float sum = 0;

    for (i = 1; i < 100;++i)
    {
        sum = sum + 1.0/i; //是OK的，推荐使用
        // sum = sum + (float)(1/i); //错误写法
        //也可以这样写：sum + 1/(float)(i); 
    }
    printf("sum = %f\n",sum); //float必须用%f输出

    system("pause");
    return 0;
}