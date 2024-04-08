#include<stdio.h>
#include<stdlib.h>


//方式一
struct Student //定义一个类型
{
    int age;
    float score;
    char sex;
};


int main(void)
{
    struct Student st = {80,66.6F,'F'}; //初始化  定义的同时赋初值
    struct Student * pst = &st; //&st不能改成st

    pst->age = 88; //第二种方式
    st.score = 66.6f; //第一种方式  66.6在C语言中默认是double类型，如果希望一个实数是float类型，则必须在末尾加f或F，因此66.6是double，66.6f或66.6F是float
    printf("%d %f\n",st.age,pst->score);
    

    printf("%d %f %c \n",st.age,st.score,st.sex);

    system("pause");
    return 0;
    
}