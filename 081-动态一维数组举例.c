#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
/*
    体会动态数组的优点 
*/
int main(void)
{
    int a[5]; //如果int占4个字节的话，则本数组总共包含有20个字节，每四个字节被当作一个int变量来使用
    int len;
    int *pArr;
    int i;

    printf("请输入你要存放的元素的个数：");
    scanf("%d",&len);
    pArr = (int *)malloc(4 * len); //12行，动态的构造了一个一维数组，该一维数组的长度是len，该数组的名字是pArr，类型是int型，类似于：int pArr[len];

    //对一维数组进行操作
    for (i = 0;i < len;++i)
        scanf("%d",&pArr[i]);

    //对一维数组进行输出
    printf("一维数组的内容是：\n");
    for ( i = 0; i < len; ++i)
        printf("%d\n",pArr[i]);
    
    free(pArr);//释放掉动态分配的数组

    system("pause");
    return 0;
}