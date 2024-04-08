/* 
    2022/5/6
    解方程的例子实现
 */
#include <stdio.h>
#include<math.h> //数学函数
#include<stdlib.h> //包含system()函数
int main(void)
{
    //保存三个系数
    int a = 1; //=表示赋值
    int b = 2;
    int c = 3;
    double delta; //判别式
    double x1;
    double x2;

    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        //有两个解
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("The answer is x1 = %f,x2 = %f \n", x1, x2);
    }
    else if (delta == 0)
    {
        //唯一解
        x1 = -b / (2 * a);
        x2 = x1; //右边赋给左边
        printf("The answer is x1 = %f,x2 = %f \n", x1, x2);
    }
    else
    {
        //无解
        printf("No answer!\n");
    }
    system("pause");
    return 0;
}