#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void f(int *q)
{
    //*p = 200; //error
    //q = 200;
    // **q = 200;//error
    *q = 200; //可以修改16行动态分配的这4个字节的内容
    //free(q); //把q所指向的内存释放掉   本语句必须被注释掉，否则会导致第21行代码出错
}

void g(int **p)
{
    
}
int main(void)
{
    int *p = (int *)malloc(sizeof(int));//sizeof(int)返回的是int所占的字节数
    *p = 10;

    printf("%d\n",*p); //10
    f(p);//p是int *类型  OK
    g(&p); //p是int *类型，&p是int **
    printf("%d\n",*p); //200  21行 

    system("pause");
    return 0;
}