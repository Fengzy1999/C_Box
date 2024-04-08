#include<stdio.h>
# include<stdlib.h>
int main(void)
{
    int i;
    char ch;
    scanf("%d",&i);
    printf("i = %d\n",i);

    //......
    while((ch=getchar()) != '\n' )//获取到回车停止
        continue;
    int j;
    scanf("%d",&j);
    printf("j = %d",j);

    system("pause");
    return 0;
}