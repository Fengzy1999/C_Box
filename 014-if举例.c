#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    float score; //score分数

    printf("请输入您的考试成绩：");
    scanf("%f",&score);

    if(score > 100)
        printf("OMG!\n");
    else if(score>=90 && score<=100) //不能写成 90<=score<=100
        printf("优秀!\n");
    else if(score>=80 && score<=90) 
        printf("良好!\n");
    else if(score>=60 && score<=80) 
        printf("及格!\n");
    else if(score>=0 && score<=60) 
        printf("不及格，继续努力!\n");
    else
        printf("成绩过低");

    system("pause");
    return 0;
}
