#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double delta;
    double x1, x2;
    char ch;
    do
    {
        printf("请输入一元二次方程的三个系数:\n");
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("c = ");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("有两个解！x1 = %lf,x2 = %lf\n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("有唯一解！x1 = x2 = %lf\n", x1, x2);
        }
        else
        {
            printf("无实数解！\n");
        }

        printf("您想继续吗？（Y/N）：");
        scanf(" %c", &ch);
    } while ('y' == ch || 'Y' == ch);

    system("pause");
    return 0;
}