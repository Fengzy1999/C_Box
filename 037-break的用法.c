#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i;
    for(i=0;i<3;++i)
    {
        if(3>2)
            break;//break虽然是if内部的语句，但break终止的确是外部的
        printf("嘿嘿\n");//永远不会输出
    }
    
    system("pause");
    return 0;
}