#include<stdio.h>
#include<stdlib.h>

//只定义了一个数据类型，并没有定义变量。该数据类型的名字是 enum WeekDay
enum WeekDay
{
    MonDay = 10,TuesDay,WednesDay,ThurDay,FriDay,SaturDay,SunDay
};
int main(void)
{
    // int day; //day定义成int 类型不合适
    enum WeekDay day = WednesDay;
    printf("%d\n",day);

    system("pause");
    return 0;
}