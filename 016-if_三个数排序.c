#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c; 
    int t; 

    printf("请输入三个整数（中间以空格分隔）：");
    scanf("%d %d %d",&a,&b,&c);
    //1 2 3   3 2 1
    //3 2 1   1 2 3
    //3 6 1   1 6 3  失败 
    if(a < b);
    {
        t = a;
        a = b;
        b = t;
    }
    if(a < c);
    {
        t = a;
        a = c;
        c = t;
    }
    if(b < c);
    {
        t = b;
        b = c;
        c = t;
    }
    
    printf("%d %d %d\n",a,b,c);
    system("pause");
    return 0;
}