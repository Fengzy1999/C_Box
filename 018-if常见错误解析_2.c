#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    if(3 > 2)
		printf("AAA\n");
	else if(3 > 1)
		printf("BBB\n");
	else
		printf("CCC\n");
    system("pause");
    return 0;
}
/*
输出结果为  AAA
    if(表达式1)
		A;
	else if(表达式2)
		B;
	else if(表达式3)
		C;
	else
		D;
即便表达式1和2都成立，但只会执行A语句
*/
