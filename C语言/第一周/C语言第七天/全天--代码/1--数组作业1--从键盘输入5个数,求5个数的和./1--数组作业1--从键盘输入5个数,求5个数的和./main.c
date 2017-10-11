//
//  main.c
//  1--数组作业1--从键盘输入5个数,求5个数的和.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
#if 0
//    从键盘输入5个数,求5个数的和.
    //方法一
    int array[5];
    int sum = 0;//保存5个的和
    //从键盘输入5个数 分别给数组的5个元素赋值
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&array[i]);
    }
    //求5个数的和
    for(int i = 0;i < 5;i++)
    {
        sum += array[i];
    }
    
    printf("sum = %d\n",sum);
#else
    //方法二
    int array[5];
    int sum = 0;//保存5个的和
    //从键盘输入5个数 分别给数组的5个元素赋值,求5个数的和
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    printf("sum = %d\n",sum);
    
#endif
    return 0;
}









