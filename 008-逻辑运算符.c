#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i = 10;
    int k = 20;
    int m;

    // m = ( 1 > 2 ) && (k = 5);
    //&& 左边的表达式为假，则右边的表达式就不会执行
    /* m = 0 k = 20 */
    m = ( 1 > 2 ) || (k = 5);
    // || 左边的表达式为真，则右边的表达式就不会执行
    /* m = 1 k = 5 */
    printf("m = %d,k = %d\n",m,k);
    system("pause");
    return 0;
}