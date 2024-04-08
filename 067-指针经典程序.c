#include<stdio.h>
#include<stdlib.h>
//前置声明
void huhuan_1(int,int);
void huhuan_2(int *,int *);
void huhuan_3(int *,int *);

int main(void)
{
    int a = 3;
    int b = 5;

    // huhuan_1(a,b); //输出 a = 3,b = 5
    // huhuan_2(*p,*q);是错误的，huhuan_2(a,b),也是错误的
    // huhuan_2(&a,&b); 
    huhuan_3(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    
    system("pause");
    return 0;

}

// //不能完成互换
// void huhuan_1(int a,int b)
// {
//     int t;

//     t = a;
//     a = b;
//     b = t;

//     return;
// }

//不能完成互换功能
// void huhuan_2(int *p,int *q)
// {
//     int *t;//如果互换p和q的值，则t必须是int *，不能是int，否则会出错

//     t = p;
//     p = q;
//     q = t;
// }

void huhuan_3(int *p,int *q)
{
    int t;//如果互换p和q的值，则t必须定义为int，不能定义为int *，否则会出错

    t = *p;  //p是int *，*p是int
    *p = *q;
    *q = t;
}