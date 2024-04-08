#include<stdio.h>
#include<stdlib.h>

//方式一
struct studdent //定义一个类型
{
    int age;
    float score;
    char sex;
};

//方式二
struct studdent2 //定义一个类型
{
    int age;
    float score;
    char sex;
}st2;

//方式三
struct  //定义一个类型
{
    int age;
    float score;
    char sex;
}st3;

int main(void)
{
    struct student st = {80,66.6,'F'};
    // int age;
    // float score;
    // char name[100];
    // int age 2;


    system("pause");
    return 0;
    
}