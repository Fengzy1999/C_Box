#include<stdio.h>
#include<stdlib.h>

//方式一
struct studdent //定义一个类型
{
    int age;
    float score;
    char sex;
};


int main(void)
{
    struct student st = {80,66.6,'F'}; //初始化  定义的同时赋初值
    struct student st2;
    st2.age = 10;
    st2.score = 88;
    st2.sex = 'F';

    printf("%d %f %c \n",st.age,st.score,st.sex);
    printf("%d %f %c \n",st2.age,st2.score,st2.sex);



    system("pause");
    return 0;
    
}